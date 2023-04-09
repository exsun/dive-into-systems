/*
 * I/O in C
 */
#include <stdio.h>

int main(){
	int num1, num2;
	// get first number
	printf("Enter a number:");
	scanf("%d", &num1);
	// get second number
	printf("Enter another number:");
	scanf("%d", &num2);
	// print sum
	printf("%d + %d = %d", num1, num2, num1+num2);
	return 0;
}
