import argparse
from datetime import datetime, timedelta
from subprocess import run

parser = argparse.ArgumentParser(description='Run a commandline string repeatedly until and end-condition is met.\n\n'
                                             'examples:\n'
                                             '          python repeat.py -n 6 -c "cd && ls"\n'
                                             '          python repeat.py -u tomorrow -c "python myscript.py -a 123 -b xyz"\n'
                                             '          python repeat.py -u 2020/10/28@13:45:00 -c "perl myscript.pl"\n',
                                 formatter_class = argparse.RawTextHelpFormatter,)
group = parser.add_mutually_exclusive_group()


group.add_argument('-n', dest='ntimes', type=int, default=0,
                    help='repeat N times')

group.add_argument('-u', dest='until', type=str, default='',
                    help='repeat UNTIL a specific DATE\n'
                         'Accepted date formats are YYYY/MM/DD and YYYY/MM/DD@hh:mm:ss (local time using 24h-clock)\n'
                         'Predefinite options (NON case-sensitive):\n'
                         '                                         TODAY    (until the midnight of the current day)\n'
                         '                                         TOMORROW (for the next 24h)\n'
                         '                                         FOREVER  (respawn the script forever)\n')

parser.add_argument('-c', dest='command', type=str,
                    help='the commandline to run (delimited by single or double quotes)\n'
                          'for example:\n'
                          '            "python --version"\n'
                          '            "python myscript.py -a 123 -b xyz"\n'
                          '            "cd && ls"\n'
                          )

args = parser.parse_args()
#print(args)

ntimes = args.ntimes
until  = args.until.upper()
cmd = args.command



run_count = 0
def vprint():
    global run_count
    now = datetime.now().isoformat().split('T')[0] + '@23:59:59'
    print(f'rep.{run_count} started {now}')
    run_count += 1


if until:
    if until == 'TODAY':
        _ = datetime.today().isoformat().split('T')[0] + '@23:59:59'
        date_end = datetime.strptime(_.replace('-','/'), '%Y/%m/%d@%H:%M:%S')

    elif until == 'TOMORROW':
        date_end = datetime.today() + timedelta(hours=24)

    elif until == 'FOREVER':
        date_end = until

    elif '@' in until:
        date_end = datetime.strptime(until, '%Y/%m/%d@%H:%M:%S')
    else:
        date_end = datetime.strptime(until, '%Y/%m/%d')
    
    print(f'repeating until: {date_end}')

    
    if date_end == 'FOREVER':
        while True:
            vprint()
            run(cmd, shell=True)
    else:
        while datetime.now() < date_end:
            vprint()
            run(cmd, shell=True)


if ntimes:
    print(f'repeating for: {ntimes} times')
    for _ in range(ntimes):
        vprint()
        run(cmd, shell=True)

print('done')






