#include <stdio.h>

int main(void) {

	struct student {
		char myLetter;
		char* firstName;
		char* lastName;
		int age;
		double score;
		char parentName[20];
	}x;

	x.myLetter = 'A';
	x.firstName = "Emre";
	x.lastName = "Catal";
	x.age = 19;
	x.score = 99.9;
	strcpy(x.parentName, "Mehmet");     //if you use char array in your struct you should also use strcpy 

	struct student y = { 'B', "Nisa", "Pampal",20, 47.98, "Osman" };     //or you can write side by side respectively

	printf("student x's letter: %c\n", x.myLetter);
	printf("student x's first name: %s\n", x.firstName);
	printf("student x's last name: %s\n", x.lastName);
	printf("student x's age: %d\n", x.age);
	printf("student x's score: %lf\n", x.score);
	printf("student x's parent name: %s\n\n", x.parentName);

	printf("student y's letter: %c\n", y.myLetter);
	printf("student y's first name: %s\n", y.firstName);
	printf("student y's last name: %s\n", y.lastName);
	printf("student y's age: %d\n", y.age);
	printf("student y's score: %lf\n", y.score);
	printf("student y's parent name: %s\n\n", y.parentName);

	return 0;
}
