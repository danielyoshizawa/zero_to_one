#include <iostream>
#include <string>

// Function declaration and implementation
// Here our output_type is int
// The function name is get_first_operand
// And it receives no parameters
int get_first_operand() {
  // You can declare variables inside a function
  // but remember that this variable will only exists inside the function
  // if you try to call it in another function it will be unknown to the other function
  int first  = 0;

  std::cout << "Enter the first positive integer : ";
  std::cin >> first;

  // Here we return a variable of the type defined by the output_type in the
  // function declaration, in this case, first is a int, and we told it would be an int
  // so we are keeping our word.
  return first;
}

int get_second_operand() {
  int second = 0;

  std::cout << "Enter the second positive integer : ";
  std::cin >> second;

  return second;
}

std::string get_operation() {
  std::string operation = "";

  std::cout << "Which operation ( + | - | * | / ) :" ;
  std::cin >> operation;

  return operation;
}

// Compute function receives 3 parameters
// Notice that those have names and we can use inside our code
// calling it by its names
// Since this function don't return anything, we declare the output_type as void
void compute(int first, int second, std::string operation) {
  if (operation == "+") {
    std::cout << "The sum is : " << first + second << std::endl;
  } else if (operation == "-") {
    std::cout << "The subtraction is : " << first - second << std::endl;
  } else if (operation == "*") {
    std::cout << "The multiplication is : " << first * second << std::endl;
  } else if (operation == "/") {
    if (second == 0) {
      std::cout << "We cant divide by zero" << std::endl;
    } else {
      std::cout << "The division is : " << first / second << std::endl;
    }
  } else {
    std::cout << "Operation not supported" << std::endl;
  }
}

int main() {
  for (int a = 0; a < 10; a++) {
    // Here we are calling our method get_first_operand()
    // and since it returns something, we can store it in a variable
    // it's not mandatory to store the return but since we need it
    // to pass to our other function in order to our program to work
    // is a good idea, hehehe
    int first  = get_first_operand();
    int second = get_second_operand();
    std::string operation = get_operation();

    // Compute don't returns anything, so we don't have what to store
    // so we don't assign it to a variable (assign is the same as store in a variable)
    compute(first, second, operation);
  }

  return 0;
}
