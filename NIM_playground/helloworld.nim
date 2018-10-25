echo "Hello World!"
#In Nim tabs are not allowed as indentation.
#You can set up your code editor to convert pressing Tab to any number of spaces.    
#use: nano -ET4 foo.nim 

var
    s = "some string here" #string
    c = 'h' #single char
    b = true #bool
    a : array[5, int] #array of len 5 containing int
    d = [1,2,3] #array of len 3 containing integers, the len is inferred by the compiler
    l = @[1,2,3] #sequences, arrays of mutable len, all items must be of the same type
    m: seq[int] = @[] #empty sequence, it will be filled up with int
    e = newSeq[int]() #another way to initialize an empty sequence
    f = @["abc", "def"] #a sequence containing strings

f.add("a string") #like append
echo f

echo "\ncounting up"
for i in countup(0,9,1):
    echo i

echo "\ncounting down"
for i in countdown(9,0,1):
    echo i

