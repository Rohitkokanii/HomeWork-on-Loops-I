//Print every third number from “lower” to “upper” limit. The value of “lower” and “upper” should be accepted from the user.

#include<stdio.h>

int main() {
	int lower;
	int upper;

	printf("\nEnter The Lower and Upper Digit = ");
	scanf_s("%d%d", &lower, &upper);

	for(int i=lower;i<=upper;i+=3){
		printf(" %d ", i);
	}
	printf("\n\n");
	return 0;
}