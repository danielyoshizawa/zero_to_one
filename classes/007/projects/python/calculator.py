# Function declaration and implementation
# Since python is a dynamically typed language we don't declare an output_type
# just remember that the type will be of the one returned by the function
# The function name is get_first_operand
# And it receives no parameters
def get_first_operand():

    # You can declare variables inside a function
    # but remember that this variable will only exists inside the function
    # if you try to call it in another function it will be unknown to the other function
    operand = int(input("Enter the first positive integer : "))

    # Here we are returning the operand passed by the user
    return operand

def get_second_operand():
    # Since this is python we can add everything in one line to keep the code smaller
    # but it does the same as the first function, is just a matter of preference
    return int(input("Enter the second positive integer : "))

def get_operation():
    return input("Which operation ( + | - | * | / ) :")

# Compute function receives 3 parameters
# Notice that those have names and we can use inside our code
# calling it by its names
def compute(first, second, operation):
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

for a in range(0,10):
    # Here we are calling our method get_first_operand()
    # and since it returns something, we can store it in a variable
    # it's not mandatory to store the return but since we need it
    # to pass to our other function in order to our program to work
    # is a good idea, hehehe
    first = get_first_operand()
    second = get_second_operand()
    operation = get_operation()

    # Compute don't returns anything, so we don't have what to store
    # so we don't assign it to a variable (assign is the same as store in a variable)
    compute(first, second, operation)
