#include <stdio.h>

int main() {

	float c, f, r;
	
	printf("Masukkan suhu dalam celcius: ");
	scanf("%f", &c);

	
	f = (c * 9/5)+ 32;
	r = c * 4/5;
	
	printf("suhu dalam fahrenheit: %.2f\n", f);
	printf("suhu dalam reamur: %.2f\n", r);

	return 0;
}
