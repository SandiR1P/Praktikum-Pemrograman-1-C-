#include <stdio.h>

int main() {
	int arr[10];

	for(int i = 0; i < 10; i++) {
		printf("masukkan nilai Mahasiswa ke-%d: ", i+ 1);
		scanf("%d", &arr[i]);
	}

	printf("\nDaftar nilai mahasiswa yang lulus:\n");
	for(i = 0; i <= 10; i++) {
		if(arr[i] >= 60) {
			printf("Mahasiswa ke-%d: %d\n", i + 1, arr[i]);
		}
	}
	return 0;
}
