#include <stdio.h>

int main() {
	int A[11];
	int counter = 0;

	int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

	for (int i = 0; i < 11; i++) {
		if (data[i] % 2 == 0) {
			A[counter] = data[i];
			counter++;
		}
	}

	printf("Isi array setelah menyimpan nilai genap:\n");
	for (int i = 0; i < counter; i++) {
		printf("%d ", A[i]);
	}

	return 0;
}
