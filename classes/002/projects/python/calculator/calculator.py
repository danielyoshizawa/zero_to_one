# first is a variable that can store values
# python is dynamically typed, this means that you don't have to define
# its type on declaration.

# for naming, there are some rules that you can check here,
# https://www.w3schools.com/python/gloss_python_variable_names.asp

# input is a command to receive information from the console
# it returns a string, so we need to call a cast function

# int() converts a string to integer, so in this case our variable
# more on casting here, https://www.w3schools.com/python/python_casting.asp

# first and second will be interpreted as integers, becuase they are
# receiving integer types on assignment.
first = int(input("Enter the first positive integer : "))
second = int(input("Enter the second positive integer : "))

# print is a function to print to the console.
# It receives a string an write to the console.

# Here we need to use another cast function, since
# first and second are integers and print expects a string

# we use 2 + commands, one for adding the integers and
# other to concatenate the strings.
print("The sum is : " + str(first + second))
