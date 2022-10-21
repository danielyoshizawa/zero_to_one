#include <iostream>
#include <string>

int main() {
  // For command, the first statement is the initialization,
  // here we declare a variable of type int starting at zero
  // this variable will be our state control.
  // The second statement is the condition, that will be test at
  // the begining of the iteration, so a < 10 reads as, a lower than 10
  // the third one is the state change statement, we are adding 1 to our
  // control variable, a++ is the same as a + 1, this will be called at
  // the end of each iteration and before the condition check
  // so for our first iteration, a == 0, a is lower than 10, so execute,
  // on the next iteration, we will call a++, changing a == 1,
  // which a still lower than 10, so execute, this will be performed until
  // a++ results in 10, then, a == 10, which makes this condition false, a < 10,
  // well, a is no longer lower than 10, so our code will not execute, and the
  // program execution will continue from the line after the close bracket of our
  // for command.
  for (int a = 0; a < 10; a++) {
    int first  = 0;
    int second = 0;
    std::string operation = "";

    std::cout << "Enter the first positive integer : ";
    std::cin >> first;
    std::cout << "Enter the second positive integer : ";
    std::cin >> second;
    std::cout << "Which operation ( + | - | * | / ) :" ;
    std::cin >> operation;

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
  } // Closing our for loop block,
  // after the condition evaluates to false we continue from here

  return 0;
}
