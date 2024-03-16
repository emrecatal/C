#include <stdio.h>

int cubeByValue(int);
void cubeByReference(int*);

int main(void) {
	int a = 5;
	int* aPtr = &a;

	printf("value of a: %d\n", a);
	printf("value of a: %d\n", *aPtr);

	printf("adress of a: %p\n", &a);
	printf("adress of a: %p\n", aPtr);   // %p: it includes zeros at beginning
	printf("adress of a: %x\n", aPtr);   // %x: it doesn't include zeros
	printf("\n\n\n");

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	int number1, number2;
	number1 = number2 = 3;
	printf("number1 = 3, number2 = 3\n\n");

	printf("the original value of number1: %d\n", number1);
	number1 = cubeByValue(number1);
	printf("the new value of number1: %d\n\n", number1);

	printf("the original value of number2: %d\n", number2);
	cubeByReference(&number2);
	printf("the new value of number2: %d\n\n", number2);

	return 0;
}

int cubeByValue(int a) {
	return a * a * a;
}

void cubeByReference(int* a) {
	*a = (*a) * (*a) * (*a);
}
