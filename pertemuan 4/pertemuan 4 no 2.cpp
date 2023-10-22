#include <stdio.h>

int main() {
	
	int n;
	
	printf("masukkan angka: ");
	scanf("%i", &n);
	
	if(n > 50){
	n = n - 25;
	}else {
	n = n +10;
	}
	printf("%i", n);
	
	return 0;
}
