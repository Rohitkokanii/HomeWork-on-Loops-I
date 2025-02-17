//Accept a number. Reverse it. Check if the reverse and the original number are same.

#include<stdio.h>

int main() {
	int num;
	int lastDigit;
	int rev=0;
	int pos = 100;
	printf("\nEnter no. = ");
	scanf_s("%d", &num);
	int orgNum = num;

	while (num > 0) {
		lastDigit = num % 10;
		rev = rev + (lastDigit * pos);
		num /= 10;
		pos /= 10;
	}
	printf("\nReverse No. = %d\n",rev);
	if (rev == orgNum) {
		printf("\nPalindrom\n");
	}
	else {
		printf("\nNot Palindrom\n");
	}
	return 0;
}