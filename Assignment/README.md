# Lab 1: Implementation of math.c file
In this lab the math.h header file was provided with a declaration for the math(int, int, char) function. The math.c file was created in order to implement this function. This function will take two numbers, perform an operation, and return the result.

## math.h file
This file starts with two preprocessors ifndef and define.

"#ifndef MATH_H_"
This macro checks to see if the alias MATH_H_ file is not defined

"#define MATH_H_"
This macro will define MATH_H_ only if it is not already defined

The math function is then declared in this file

```c
/*
 * math.h
 *
 *  Created on: Aug 22, 2017
 * 	Last Edited: Sept 5, 2017
 *      Author: Russell Trafford
 */

/* Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
*/

#ifndef MATH_H_
#define MATH_H_

//Part of your documentation should be listing the valid inputs and outputs for the functions you create.
int math(int num1, int num2, char Operator);

#endif /* MATH_H_ */
```

## math.c file
In this file there are the includes for <stdio.h> and "math.h"

<stdio.h> is necessary for using the printf function

importing "math.h" is necessary so that math.c can implement the declared math function in math.header

The math function is implemented where the operator is checked and the result is set for the corresponding math function

The main in this program defines num1, num2, and the operator. It then executes the implemented math function and prints out the result.

```c
/*
Matt Mammarelli
9/16/17
ECE 09342-2
*/

#include <stdio.h>
#include "math.h"

//needs stdio.h for printf. needs math.h for math(int,int,char) function

int result = 0; //result of math operation


int main()
{
	int num1=5; //operand 1
	int num2=2; //operand 2
	int operator='%'; 
	
	printf ("Answer is: %i", math(num1,num2,operator)); //performs math operation and prints result
	
	return 0;
}
//implementation of math function in math.h
int math(int num1, int num2, char Operator){
	//checks operator and sets result for each corresponding math operation
	switch(Operator){
		case '+':
			result = num1+num2;
			break;
		case '-':
			result = num1-num2;
			break;
		case '*':
			result = num1*num2;
			break;
		case '/':
			result = num1/num2;
			break;
		case '%':
			result = num1%num2;
			break;
		default:
			printf("Invalid operator");	//if operator not one of the above, prints invalid operator
	}
	
	return result;
	
} 
```
