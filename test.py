import math

"""birth_year =input("bith year: ")
print(type(birth_year))
age = 2019 - int(birth_year)
print(type(age))
print(age)
weight = input("what is your weight?(lbs) ")
weight_kg = int(weight) * 0.45
print(weight_kg)

#how to write mutiple strings#
course = 'hi john'
print(course[2:])
name = 'jennifer'
print(name[1:-1])

# concatenating strings#
first = 'john'
last = 'smith'
message = first + '  [' + last +']  is a coder'
msg = f'{first} [{last}] is a coder'
print(msg)

#how to calculate for the length of strings#
mate = 'you look quite good today'
print(len(mate))

# how to change the cases of the strings#

print(course.title())

# how to if there exist a word or letter in the code#
print('pamela' in course)

# using operators and assignments#
x = 10.9888
x = x + 6
x += 6
print( round(x))
print(abs(-5665))

#complex math modules#
print(math.floor(99.9))

# lets talk about if statements#
is_hot = False
is_cold = False

if is_hot:
    print("its a hot day")
    print("drink lots of water")
elif is_cold:
    print("its a cold day")
    print("wear warm clothes")

else:
    print("its a lovely day")
    
print("enjoy your day")


#exercise#
print("price of the house is $1m")
buyer = False

if buyer:
    print( " if buyer has good credit")
    print("they need to put dowm 10%")


else:
    print("otherwise")
    print("they need to put down 20%")
print("the down payment")

# correction#
price = 1000000
has_good_payment = False
if has_good_payment:
    down_payments = 0.1 * price
else:
    down_payments = 0.2 * price
print(f" Down Payments: ${down_payments}")

#exercise two#
# question , if applicant has high income AND good credit,,, then print eligible for loan#
income_good = 1000000
income = input("enter your income: ")

good_credit = True
low_payments = True
if good_credit and income:
    income and income_good
    print("eligible for loan")


elif low_payments :
   low_payments /= income_good
   print("not eligible")
    
#correction#
has_high_income = True
has_good_credit = True
if has_high_income and has_good_credit:
    print("eligible for loan")
# using the or operator#
has_high_income = False
has_good_credit =False
if has_high_income or has_good_credit:
    print("eligible for loan")
#lets build a car game#
print(" start, stop, help, quit")
command = ""
started = False
while command != "quit":
    command =input("> ").lower()
    if command =="start":
        if started:
            print(" car already started")
        else:
            started=True
            print("car started .... go")
    elif command == "stop":
        print("car stopped.")
    elif command =="help":
        print("""
#start - to start the car
#stop - to stop the car 
#quit- to exit""")
    #elif command == "quit":
        #break

    ## print(" i donot  understand ypur language")"""

numbers = 0
numbers = int(input('enter a number: '))

while numbers <=675:
    numbers  = numbers+ 1
    print(numbers)

name = input("enter your name:  ")
print (len(name))
if len(name) < 3:
    print("name too short")
elif  len(name) > 50:
    print("name too long")
else:
    print("nice name")


secret_number = 15
guess = int(input("guess: "))
while guess != secret_number:
   if guess < secret_number:
    print("you failed")
else:
    print("you won")




    
    



