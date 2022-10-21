# For command, the first statement is the initialization,
# here we declare a variable its type is defined by the context, in our example
# numeric, this variable will be our state control.
# The second statement is the condition, that will be test at
# the begining of the iteration, is a in (0,1,2,3,4,5,6,7,8,9)
# python will add 1 every time the iteration ends, so a starts at 0,
# and every end of iteration it adds one, so for the first iteration
# a become 1, and so on, then the condition is evaluated again,
# a == 1 in (0,1,2,3,4,5,6,7,8,9), then execute, until a == 10,
# then a in (0,1,2,3,4,5,6,7,8,9) will evaluate to false, so
# our code is no longer executed and the program continues to
# the line after the end of the for command.
for a in range(0,10):
    first = int(input("Enter the first positive integer : "))
    second = int(input("Enter the second positive integer : "))
    operation = input("Which operation ( + | - | * | / ) :")

    if (operation == '+'):
        print("The sum is : " + str(first + second))
    elif (operation == '-'):
        print("The subtraction is : " + str(first - second))
    elif (operation == '*'):
        print("The multiplication is : " + str(first * second))
    elif (operation == '/'):
        if (second == 0):
            print("We cant divide by zero")
        else:
            print("The division is : " + str(first / second))
    else:
        print("Operation not supported ")
# Codes continue from here after the condition is not true anymore
