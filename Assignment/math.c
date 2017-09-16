#include <stdio.h>
#include "math.h"

int result = 0; //result


int main()
{
	int num1=5;
	int num2=2;
	int operator='%';
	
	
	
	printf ("Answer is: %i", math(num1,num2,operator));
	
	return 0;
}

int math(int num1, int num2, char Operator){
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
			printf("Invalid operator");	
	}
	
	return result;
	
} 