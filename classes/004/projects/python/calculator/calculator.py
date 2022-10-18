first = int(input("Enter the first positive integer : "))
second = int(input("Enter the second positive integer : "))
# Operation is of text type so we don't need to convert (cast) to int
# as the previous variables
operation = input("Which operation ( + | - ) :")

# if (condition):
# the if command evaluates the condition passed as argument
# if it's true, it will execute the block inside the curly brackets {}
# if it's not true, it will execute the else statement,
# the else statement is not obrigatory and we can use more than one
# if statement, but more on this on next classes.
# Conditions are any expression that evaluates to true or false,
# you can use booleans, comparissons commands like, == (equal), > (higher),
# < (lower), >= (equal or higher), <= (equal or lower), ! (negation)
# The comparisson commands will return (output) a boolean value, which can
# be only 0 or 1, meaning, false or true, the inputs are the 2 elements
# that surround the command a == b, means is a equals b ?
if (operation == '+'):
    print("The sum is : " + str(first + second))
else:
    print("The subtraction is : " + str(first - second))
