#include <stdio.h>
#include <math.h>

int main() {
    float alas = 4.0;
    float tinggi = 5.0;

    float miring = sqrt(pow(alas, 2) + pow(tinggi, 2));

    printf("Panjang Alas: %.2f cm\n", alas);
    printf("Panjang Tinggi: %.2f cm\n", tinggi);
    printf("Panjang Sisi Miring: %.2f cm\n", miring);

    return 0;
}
