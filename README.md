# myCplusplusJourney
In this Repository I will publish my basic C++ code

## A huge thanks to GitHub Copilot to helping me to comment inside of code

### Table of Contents

**[Introduction to C++](#introduction-to-c++)**<br>

# Introduction to C++
##### Low level Programming Language
That means C++ programs run close to hardware, C++ is commonly used in operating system. You can access the memory by function and use pointer.
##### Speed of Execution
C++ doesn't come with garbage collection like Java and Python does also C++ does not use interpreter that's why C++ gives us a speedy runtime.
##### Derived from C
C was the language before C++ to write close to hardware program, but C didn't had OOP that's why C++ came in.
##### Richer library than C
C++ offers more libary than C, it offers one of the great libary called STL (Standard Template Libbary) which can be used in CP and software development.
##### Object Oriented Programming
C++ Offers you to do Object Oriented Programming and that's why this is called C++.

### Basics
- Learned about buffer: If you press input `10 11` like this in a space between, the program will take the value of first variable 10 and second variable will take value 11.
- `sizeof()` operator gives you how much byte is a variable in a compiler.
- Unary Operator `++` here 
``` int x = 10; int z = x++; cout << x << " " << z; // 11 10 ```
above `z = x++` means `z = x; x = x + 1;`
``` int x = 10; int z = ++x; cout << x << " " << z; // 12 12 ```
above `z = ++x` means ` x = x + 1; z = x;`
- `static_cast<double>x/y`
```
int main
{
int x = 10, y = 20
double z = x / y;
cout << z; // 0
}
```
in avobe code output will be 0 when operation between the integer then It will give integer output.
if you want to solve that problem you have to use this.
``` double z = static_cast<double> x / y;```