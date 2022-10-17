# CLASS 005 - Keep Walking
## Adding more operations
We already have 2 operations, in this class we will add 2 more, division and multiplication. Most languages will **divide** using the **/** command and **multiply** using the **\*** command, for integers
it will be something like, **a / b** and **a * b**.

To add more operations we will use the else if command, some languages uses elif or elsif, that is a combination of the else and if, on this structure the conditions are evaluated sequentially, first the if, then the next else if, and the next, then the else statement.

The general idea is something like this
```
if (condition) {

} else if (condition) {

} else {

}
```

You can add as many else if you want between the if and else commands, with this we can improve our calculator to have 2 more operations

## Dividing by zero
Oh way, and if I divide by zero?

Well, that might be a problem, each language will respond to this in a different way, but it is not good to depend on language specifications for a case where we know it's not good.

We have some techniques to handle errors and exceptions, but today we will stick to what we learn so far and use the if/else command to test for zero in the dividend.

Since this condition only affects division, we will test the second operand only on the division block of our code. To do this we can use the following

```
if (condition) {
  if (condition) {

  } else {

  }
}
```
See, we added a new if / else command inside a if command, you can add as many as you want and those will not interfere in the previous one, if / else are flow controllers and each time it's called will control a new flow.

Nested if/else can become very difficult to read and understand, so we will use it only for now, only to get used to the command, in the future we will use a better approach to handle conditionals.

I'll leave an example on the project folder for those who want to get a little ahead, but don't worry using what we learn today is totally fine for now.

## Remember
You can use if without else, but can't use else nor else if without if.

## Breakdown
- Add to new operations to our calculator
- Using else if commands
- Check if the second operand is zero on divisions
- You can print a message saying it to the user, that would be a nice touch.

## References
if / else - https://eecs.oregonstate.edu/ecampus-video/CS161/template/chapter_4/ifelse.html
