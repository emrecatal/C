#include <stdio.h>

int main(void) {
	int arr[] = { 5, 6 , 4, 10, 9 ,99, 50, 65, 21, 7};

	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < (size - 1); j++) {

			if (arr[j] > arr[j+1]) {
				int hold = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = hold;
			}
		}
	}

	for (int i = 0; size > i; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}
