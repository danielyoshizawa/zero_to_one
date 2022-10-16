// Standard Input / Output Streams Library
// Has the funcitons cout and cin
// the command include adds functionality to your program
// iostream is part of the standard c++ library (STL), which has a lot
// of other functionalities that you can leverage.
// For more on STL, check, https://www.cplusplus.com/reference
#include <iostream>

int main() {
  // Variable declarations
  // Variables are used to store information
  // int means that this variable is of type integer (number)
  // = 0 is saying to the variavel to store 0 as its current value.
  // Always a good practice to initialize your variables, that means
  // assigning a value to the recently created variable.
  int first  = 0;
  int second = 0;

  // cout prints the text to the console
  // << is the direction from where the information will flow
  // in this line it's passing the text to cout
  // std:: is the namespace where the function is,
  // namespaces are used to organize code and avoid name conflicts
  std::cout << "Enter the first positive integer : ";
  // cin waits for the user input
  // >> means that cin will give information to the variable
  // cin will stop when the user hits enter
  std::cin >> first;
  std::cout << "Enter the second positive integer : ";
  std::cin >> second;
  // cout accepts more than on stream (<<) you can use multiple on your
  // calls.
  // first + second is a command to sum variables of the same type,
  //  in this case, int + int, will result in a new integer
  // you can assign the result of a sum to a variable
  // int a = b + c;
  // endl is the end of the line, is the same as hiting enter on your
  // keyboard when typing a text.
  std::cout << "The sum is : " << first + second << std::endl;

  // return is a concept that we will study in future classes,
  // you don't need to worry about it now.
  return 0;
}
