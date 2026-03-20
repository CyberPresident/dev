"""
1. IMPORTS (Libraries)
"""
import math        # sqrt, pow, floor
import random      # random numbers
import os          # operating system stuff
import sys         # system info
import socket      # networking (cyber stuff later)

""""
2. DATA TYPES
"""
# integers
x = 5

# float
f = 3.14

# string
name = "Jaylen"

# boolean
flag = True

# list (array)
numbers = [1,2,3,4]

# tuple (unchangeable list)
coords = (10,20)

# dictionary (key-value)
person = {"name": "Jaylen", "age": 22}

# set (unique values)
unique_nums = {1,2,3}

"""
3. VARIABLE FORMAT
"""
age = 21
price = 19.99
grade = "A"
passed = True

"""
4. FUNCTIONS
"""
def add(a, b):
    return a + b

def say_hello():
    print("Hello")

# calling functions
result = add(5,10)
say_hello()

"""
5. INPUT / OUTPUT
"""
# output
print("Hello world")

# input
name = input("Enter name: ")

# input number
age = int(input("Enter age: "))

"""
6. LOOPS
"""
# for loop
for i in range(10):
    print(i)


# while loop
i = 0
while i < 10:
    print(i)
    i += 1

"""
7. LISTS (ARRAYS)
"""
numbers = [1,2,3,4,5]

# access element
print(numbers[0])

# add element
numbers.append(6)

# remove element
numbers.pop()

# length
len(numbers)

"""
8. CONDITIONALS
"""
x = 10

if x > 5:
    print("big")

elif x == 5:
    print("equal")

else:
    print("small")

"""
9. RANDOM NUMBERS
"""
import random

# random number 0-9
r = random.randint(0,9)

# random float
f = random.random()

"""
10. FILES
"""
# write file
with open("test.txt","w") as f:
    f.write("hello")

# read file
with open("test.txt","r") as f:
    data = f.read()

"""
11. NETWORKING (useful later)
"""
import socket

host = socket.gethostname()
ip = socket.gethostbyname(host)

print(host)
print(ip)

"""
12. COMMON MISTAKES
"""
# indentation matters

if True:
    print("correct")

# NOT

# if True:
# print("wrong")
