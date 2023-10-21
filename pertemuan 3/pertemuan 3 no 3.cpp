#include <stdio.h>
#include <math.h>

int main() {

	float a, t, miring;
	
	printf("Masukkan panjang alas segitiga: ");
	scanf("%f", &a);
	
	printf("Masukkan panjang tinggi segitiga: ");
	scanf("%f", &t);
	
	miring = sqrt(a*a + t*t);
	
	
	printf("sisi miring segitga adalah: %.2f\n", miring);

	return 0;
}
