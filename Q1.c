//Accept a number from the user and check if it is Armstrong or not.

#include<stdio.h>

int main() {
	int num;
	int lastDigit;
	int arm = 0;
	printf("\nEnter No. = ");
	scanf_s("%d", &num);
	int org = num;

	while (num > 0) {
		lastDigit = num % 10;
		arm = arm+(lastDigit*lastDigit*lastDigit);
		num /= 10;
	}
	if (org == arm) {
		printf("\nArmstrong\n");
	}
	else {
		printf("\nNot Armstrong\n");
	}
	return 0;
}