# CLASS 007 - How about some functionality

## Previously on Zero to One
We already learn a lot about programming and have created our first project, an awesome calculator that can perform 4 different operations. It's simple and very useful, imagine you need to calculate how many points you need to score to win that dart game? Would you use any calculator to do this important task or use your own? I'd prefer to use yours.

So far we covered how a computer communicates, inputs and outputs (I/O), variables, types, type operations, if/else statements, conditions, loops, you learn how to run your programs, how to research the documentation of your chosen language, it's a lot, congrats my friend.

Don't worry if you feel that you didn't get most of it, it's complicated, the important thing is that you know that this things exists and that if you done it once you can do it again, and this brings us to our current class, functions.

## Functions
In software development we usually need to do the same things but with different inputs, and is [not good to repeat yourself](https://en.wikipedia.org/wiki/Don%27t_repeat_yourself), so here is where functions come in hand.

A function is a part of your code that you can call as many times you want to perform a specific task, you already used some functions but didn't even notice, for example in Python you used **print()**, and in C++ **cout**, those are called built-in function, those are functions defined within the language that can be reused so you don't have to repeat the code to print to the console.

We can define our own functions to perform tasks that we will call when we need it, a function has some elements used to define what it accepts and what it returns, for strong typed languages, like C++, the syntax is usually

```
output_type function_name( inputs ) {
  Your code here
}
```

in dynamically typed languages like python

```
def function_name( inputs ):
  Your code here
```

Let's break it down the strong typed one, starting by the **output_type** this is what your function will return after executing what it was made to do, this can be int, strings, floats, user defined types, more on this one in the next class, but maybe you don't want to return anything, so you can use a special type called **void**, this tells the caller that nothing will be returned.

function_name is the easy one, well, is the function name, you call your functions by its name, like print(), the parentheses tells you program that you are calling a function not a variable, there are some [conventions for naming your functions](https://en.wikipedia.org/wiki/Naming_convention_(programming), those can vary but is a good practice to use the same style for every function in your program.

And how about what you pass to your function so it can do its job? Those are the inputs, the information that you pass to set up your function, these are also types and you can have as many as you want, of different kinds, but remember that when you call your function you must provide the inputs, which we call parameters, so the function can work properly, you don't expect to build a table without a hammer, do you?

Parameters are used to make your function "programmable", you can pass different parameters to receive different outputs, those are specified on the parentheses part of the function declaration and are separated by a comma, can be of any kind supported by your program, built-in types like int, string, float, double, or custom ones that we will learn next class, the important thing here is that you must give them names, so the function can know what is what, right?

Ok, so let's say that your function has a output_type defined, receives 2 parameters and you expect it to return the result of a sum of those parameters, well how do I return the sum?

Hum, this is a tough one, how to return something? Huumm... Well, just call the **return**.

Return is a flow control command, if called if will return what you tells it to return and exit the function, if you add code after a return it won't be executed because that code block are not in the execution stack anymore, this command can be used anywhere within the scope of your functions.

Now, the real example, the one you can use to create your own functions

```
// Function declaration and implementation
int sum(int a, int b) {
  return a + b;
}

// Calling the function
sum(10,2);
```

In our example, we defined a function called sum that return a int and receives 2 int parameters, since it returns something you can store it in a variable, in this case

```
int result = sum(10,2);
```

Meaning that result will store the return of the function sum, which is 5, I used our calculator to be sure.

The same [function in python](https://www.w3schools.com/python/python_functions.asp) would be

```
def sum(a,b):
  return a + b

result = sum(10,2)
```

Now that you know how to create functions let's apply it to our calculator.

## Calculator with functions
Modify our calculator to have 4 functions, one to ask the first operand, another to ask the second, one for the operand and another to compute the selected operation.

You will replace your algorithm that inside the loop with functions calls, so you will need to move things around, don't be afraid, only remember that if you done once you can do again, so return to your original code if you get lost.

## Remember
Python is a script language, so the code executes top to bottom, if you define your functions after you call them, the interpreter wouldn't know what you are talking about, so declare your functions before you call them.

Also, don't worry if you create more or less functions, there are many solution to the same problem, the important thing here is to know that you can break you code by functionalities making it reusable and easier to read.

## Breakdown
- Define 4 functions
 - One for ask for the first operand
 - One for ask for the second operand
 - One for ask for the operation
 - One for compute the operation
- We expect no changes to you program when executed

## References
Functions - https://www.cs.utah.edu/~germain/PPS/Topics/functions.html

Refactor (Function Extraction) - https://refactoring.guru/extract-method
