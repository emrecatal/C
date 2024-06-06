#include <stdio.h>

typedef struct {
	int day;
	int month;
	int year;
}calendar;

int isLeap(int);
int dayinMonth(int, int);

int main() {
	calendar x, y, fark;
	printf("enter your birth day: ");
	scanf("%d%d%d", &x.day, &x.month, &x.year);
	printf("enter today: ");
	scanf("%d%d%d", &y.day, &y.month, &y.year);

	fark.day = y.day - x.day;
	if (fark.day < 0) {
		fark.day += dayinMonth(y.month, y.year);
		y.month--;
	}

	fark.month = y.month - x.month;
	if (fark.month < 0) {
		fark.month += 12;
		y.year--;
	}

	fark.year = y.year - x.year;

	printf("you've lived %d year, %d month and %d day \n", fark.year, fark.month, fark.day);

	return 0;
}

int dayinMonth(int month, int year) {
	switch (month) {
	case 2:
		return (isLeap(year) == 366) ? 29 : 28;
	case 4: case 6: case 9: case 11:
		return 30;
	default:
		return 31;
	}
}

int isLeap(int year) {
	if (year % 4 == 0 && year % 100 != 0) {
		return 366;
	}
	else if (year % 100 == 0 && year % 400 != 0) {
		return 366;
	}
	else return 365;
}
