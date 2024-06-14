import sys
print(sys.version)


#hello guys we are trying to explore python as beginners.

print("pamela")
if 5 > 2:
    print("Five is greater than two")

x = 5
y = "John"
print(x)
print(y)


# Lets perform some casting. Always note that casting is used to specify the data type you want to use
m = str(3)
n = int(3)
o = float(3)
print(m)
print(n)
print(o)


# Lets get the data type
q = 5
r = "alii"
print(type(q))
print(type(r))



s, t, u = "pamela", "Aunty", "Madam" 
print(s)
print(t)
print(u)

"""class student:
    name = str
    age = int
    year = str

pamela = student(name = "pamela", age= 16, year ="1983")
kuewu = student(name = "kuewu", age= 16 ,year ="1983")
john = student(name = "john", age= 16 ,year ="1983")
racheal = student(name = "racheal", age= 16, year ="1983")"""

fruits = ["apple", "orange", "banana"]
p, j, k = fruits
print(p, j, k)
print(n+q)


# Global variable
Word = "Awesome"
def myfunc():
    print("python is "+Word)
myfunc()