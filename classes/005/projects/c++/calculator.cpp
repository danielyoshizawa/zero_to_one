#include <iostream>
#include <string>

int main() {
  int first  = 0;
  int second = 0;
  std::string operation = "";

  std::cout << "Enter the first positive integer : ";
  std::cin >> first;
  std::cout << "Enter the second positive integer : ";
  std::cin >> second;
  std::cout << "Which operation ( + | - | * | / ) :" ;
  std::cin >> operation;

  // Here we are adding the else if command
  // Notice that we can add (condition) the same way we do with if
  // These will evaluate one after another until it find a true statemant
  // or reachs the end, then it will execute what is inside the else block
  if (operation == "+") {
    std::cout << "The sum is : " << first + second << std::endl;
  } else if (operation == "-") {
    std::cout << "The subtraction is : " << first - second << std::endl;
  } else if (operation == "*") {
    std::cout << "The multiplication is : " << first * second << std::endl;
  } else if (operation == "/") {
    // Here are our nested if statement, we are checking if the operation is not
    // a division by zero, which will result in a runtime error (more on this on future classes)
    // if the dividend is zero we print a message to the user, it's a good practice to
    // let the user know what was wrong.
    if (second == 0) {
      std::cout << "We cant divide by zero" << std::endl;
    } else {
      std::cout << "The division is : " << first / second << std::endl;
    }
  } else {
    std::cout << "Operation not supported" << std::endl;
  }

  return 0;
}
