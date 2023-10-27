#include <stdio.h>

int main() {
	int kode;
    char jenis;
    float harga, diskon, setelahDiskon;

    printf("Masukkan kode barang: ");
    scanf("%d", &kode);

    printf("Masukkan jenis barang (A,B,C): ");
    scanf(" %c", &jenis);

    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    switch (jenis) {
        case 'A':
            diskon = 0.1 * harga;
            break;
        case 'B':
            diskon = 0.15 * harga;
            break;
        case 'C':
            diskon = 0.2 * harga;
            break;
        default:
            diskon = 0.0;
    }

    
    setelahDiskon = harga - diskon;
	
	printf("jenis barang %c mendapatkan diskon = %.0f%%, harga setelah didiskon = %.0f", jenis, diskon / harga * 100, setelahDiskon);
	
	return 0;
	
}
