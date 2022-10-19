first = int(input("Enter the first positive integer : "))
second = int(input("Enter the second positive integer : "))
operation = input("Which operation ( + | - | * | / ) :")

# Here we are adding the elif command (else if)
# Notice that we can add (condition) the same way we do with if
# These will evaluate one after another until it find a true statemant
# or reachs the end, then it will execute what is inside the else block
if (operation == '+'):
    print("The sum is : " + str(first + second))
elif (operation == '-'):
    print("The subtraction is : " + str(first - second))
elif (operation == '*'):
    print("The multiplication is : " + str(first * second))
elif (operation == '/'):
    # Here are our nested if statement, we are checking if the operation is not
    # a division by zero, which will result in a runtime error (more on this on future classes)
    # if the dividend is zero we print a message to the user, it's a good practice to
    # let the user know what was wrong.
    if (second == 0):
        print("We cant divide by zero")
    else:
        # This operation will return a float value, since in python the types are dynamical
        print("The division is : " + str(first / second))
else:
    print("Operation not supported ")
