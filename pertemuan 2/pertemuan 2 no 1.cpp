#include <stdio.h>

int main() {
	float alas, tinggi, luas;
    alas = 8.0;
    tinggi = 5.0;

    luas = 0.5 * alas * tinggi;

    printf("Panjang Alas: %.2f cm\n", alas);
    printf("Tinggi: %.2f cm\n", tinggi);
    printf("Luas Segitiga: %.2f cm\n", luas);

    return 0;
}
