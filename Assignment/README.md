# Lab 1: Implementation of math.c file
In this lab the math.h header file was provided with a declaration for the math(int, int, char) function. The math.c file was created in order to implement this function

## math.h file
This file starts with two preprocessors ifndef and define.

"#ifndef MATH_H_"
This macro checks to see if the alias MATH_H_ file is not defined

"#define MATH_H_"
This macro will define MATH_H_ only if it is not already defined

The math function is then declared in this file

## math.c file
In this file there are the includes for <stdio.h> and "math.h"

<stdio.h> is necessary for using the printf function

importing "math.h" is necessary so that math.c can implement the declared math function in math.header

The math function is implemented where the operator is checked and the result is set for the corresponding math function

The main in this program defines num1, num2, and the operator. It then executes the implemented math function and prints out the result.

