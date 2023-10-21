#include <stdio.h>
#include <math.h>

int main() {

	float a, t, luas, keliling;
	
	printf("Masukkan panjang alas segitiga: ");
	scanf("%f", &a);
	
	printf("Masukkan panjang tinggi segitiga: ");
	scanf("%f", &t);
	
	luas = 0.5 * a * t;
	
	keliling = a + t +sqrt(a * a + t * t);
	
	printf("Luas segitiga: %.2f\n", luas);
	printf("keliling segitiga: %.2f\n", keliling);

	return 0;
}
