//Accept a number from the user. Find the sum of digits of a number.

#include<stdio.h>

int main() {
	int num;
	int lastDigit;
	int sum = 0;

	printf("\nEnter No. = ");
	scanf_s("%d", &num);

	while (num>0) {
		lastDigit = num % 10;
		sum += lastDigit;
		num /= 10;
	}

	printf("\nSum = %d\n",sum);
	return 0;
}