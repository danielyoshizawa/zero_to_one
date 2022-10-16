#include <iostream>
#include <string>

int main() {
  int first  = 0;
  int second = 0;
  // String is the type text, in c++ string is not a primitive type
  // we could use char instead, but I think this will add more complexity
  // and we don't need to worry about it now.
  std::string operation = "";

  std::cout << "Enter the first positive integer : ";
  std::cin >> first;
  std::cout << "Enter the second positive integer : ";
  std::cin >> second;
  std::cout << "Which operation ( + | - ) :" ;
  std::cin >> operation;

  // if (condition)
  // the if command evaluates the condition passed as argument
  // if it's true, it will execute the block inside the curly brackets {}
  // if it's not true, it will execute the else statement,
  // the else statement is not obrigatory and we can use more than one
  // if statement, but more on this on next classes.
  // Conditions are any expression that evaluates to true or false,
  // you can use booleans, comparissons commands like, == (equal), > (higher),
  // < (lower), >= (equal or higher), <= (equal or lower), ! (negation)
  // The comparisson commands will return (output) a boolean value, which can
  // be only 0 or 1, meaning, false or true, the inputs are the 2 elements
  // that surround the command a == b, means is a equals b ?
  if (operation == "+") {
    std::cout << "The sum is : " << first + second << std::endl;
  } else {
    std::cout << "The subtraction is : " << first - second << std::endl;
  }

  return 0;
}
