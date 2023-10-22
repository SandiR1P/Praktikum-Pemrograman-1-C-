#include <stdio.h>

int main() {
	
	int angka;
	
	printf("masukkan angka: ");
	scanf("%i", &angka);
	
	if(angka % 2 == 0){
	printf("%i adalah bilangan genap.", angka);
	}else {
	printf("%i adalah bilangan ganjil.", angka);
	}
	
	return 0;
}
