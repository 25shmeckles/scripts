import dice_test_cy as cy
import dice_test as py
from subprocess import check_output

print('using Cython version')
cy.main()

print('using Python version')
py.main()

print('using NIM version')
print('running performace test...')
s = py.time()
for n in range(20):
	check_output(f'./NIM_playground/diceof -a:{py.a} -b:{py.b}', shell=True)
print(f'Done in {py.time()-s} seconds')
