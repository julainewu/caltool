/*
 ============================================================================
 Name        : calculatorC.c
 Author      : Julaine
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1, num2;
	int ch;

	do{
		printf("Enter two numbers: ");
		scanf("%f %f", &num1, &num2);

		printf("\n*********************");
		printf("\n1.Addition");
		printf("\n2.Subtraction");
		printf("\n3.Multiplication");
		printf("\n4.Division");
		printf("\n5.Remainder");
		printf("\n6.Power(x^y)");
		printf("\n7.Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);

		switch(ch){
		case 1:
			add(num1, num2);
			break;
		case 2:
			subtract(num1, num2);
			break;
		case 3:
			multiply(num1, num2);
			break;
		case 4:
			divide(num1, num2);
			break;
		case 5:
			rem(num1, num2);
			break;
		case 7:
			printf("Thank you.");
		default:
			printf("Invalid put.");
			printf("Please enter correct input");

		}
		printf("\n***************************\n");
	}while(1);

	return EXIT_SUCCESS;
}

void display(float n1, float n2, char ch, float result)
{
	printf("%.2f %c %.2f = %.2f\n", n1, ch, n2, result);
}
// function for addition of two numbers
void add(float n1, float n2){
	float result = n1 + n2;
	display(n1, n2, '+', result);
}

//function for subtraction of two numbers
void subtract(float n1, float n2){
	float result = n1 - n2;
	display(n1, n2, '-', result);
}

void multiply(float n1, float n2){
	float result = n1 * n2;
	display(n1, n2, '*', result);
}

void divide(float n1, float n2){
	if (n2 == 0){
		printf("N2 can't be zero");
	}
	else {
	float result = n1/n2;
	display(n1, n2, '/', result);
	}
}

void rem (float n1, float n2){
	//modulus operator only works on int data type
	int num1 = n1;
	int num2 = n2;
	int result = num1%num2;
	printf("%d %% %d = %d\n", num1, num2, result);
}


