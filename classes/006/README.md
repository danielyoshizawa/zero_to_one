# CLASS 006 - Let's go for a spin
## Loops
To use our current calculator the user needs to run the program for every operation, this is not practical, luckily we can improve the code to keep asking for inputs and running the operations, this will make our calculator more usable.

To do this, we will use loop commands, it may vary from language to language, but we have 2 commands that are common to most languages, while and for, the idea is to execute the code block until some condition is not correct anymore, the condition has the same rules as the conditions on the if command, the difference is that it will be tested in every loop begin.

The while loop can be read as, while this condition is true execute this, an its syntax is as follows

```
while (condition) {
  execute this
}
```

On the **while loop** you code will probably alter the state of the condition, I say probably because the condition may be affected by external forces, but this is a topic for the future. As you can see the syntax is pretty similar to the **if command**, and is easier to think that **if** will be asked once and **while** will be asked more than once, well, while the condition is true.

Our other loop is called **for loop**, this one has different syntaxes but we will use the classic one

```
for (initialization; condition; state change) {
  execute this
}
```

This is a bit more complex to understand because the idea is to have everything the loop needs on its initialization, so let's break it down

- **For** is the loop command, exactly the same as the while command, it will run 1..n times,
- **initialization** this part will be executed only the first time the command is run, here you can initialize variables that you will use on the condition, inside the loop and will change its state according your needs.
- **condition** is the same that we use on the if and while commands, it will evaluate to a boolean (true or false), just to remember, a < b, a == b, !a, this kind of conditions.
- **state change** this part will be executed at the end of the loop and before the condition evaluation, usually we increment or decrement a variable here, a + 1, b - 1, and for simplification we have commands make it a little more readable, a + 1 can be converted to a++, and b - 1 can be converted to b--.

Of course, we have a lot more options for all this parts and we have other loops and other syntaxes but for our purpose let's keep it simple.

## Calculator in loop
Now let's go to the fun part, making our calculator run in loop, to keep it simple, let's start adapting our calculator to run 10 times, I know that it's not ideal and we have other ways to do it, but I think that making it fixed is easier and fit the knowledge that we have so far.

To do this, add the **for command** before the variable declaration, and close the block after the last else command, after the closing bracket. We will use the for command but if you fell more comfortable with the while, go ahead, the principle is pretty similar. So our for should be something like this.

In C++
```
  for (int a = 0; a < 10; a++) {
    Our calculator code
  }
```

In Python things are a little bit different then in c++, you will need a different set of commands, but we will break it down after the example
```
  for a in range(0,10):
    Our calculator code
```

- **range** this command returns a list starting at the first element incrementing one for the second element times, e.g. (0,1,2, ... ,8,9)
- **in** tests if the variable is in the list

The initialization is the variable declaration, in our case a, since python is dynamically typed we don't need to worry about its type, the condition is given by the **in** command, and the state change is done implicitly by python.

## Remember
Each language has its own particularities, you often will need to search the syntax on the documentation or tutorials, so don't worry too much to remember exactly how things are written, you can always do a quick search on you favorite search engine.

## Breakdown
- Surround our code with the for command
- Initialize control variable
- Test the condition
- Change the control variable

## References
Loops - https://www.techtarget.com/whatis/definition/loop

Loops in C++ - https://www.w3schools.com/cpp/cpp_for_loop.asp

Loops in Python - https://www.w3schools.com/python/python_for_loops.asp
