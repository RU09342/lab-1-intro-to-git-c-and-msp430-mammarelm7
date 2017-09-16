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