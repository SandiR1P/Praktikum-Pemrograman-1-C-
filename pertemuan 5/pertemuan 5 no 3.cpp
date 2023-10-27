#include <stdio.h>

int main() {
  
    int masuk, keluar, parkir, biaya;

    printf("Masukkan jam masuk: ");
    scanf("%d", &masuk);

    printf("Masukkan jam keluar: ");
    scanf("%d", &keluar);

    if (keluar >= masuk) {
        parkir = keluar - masuk;
    } else {
        // Jam keluar melampaui tengah malam
        parkir = (12 - masuk) + keluar;
    }

    if (parkir <= 2) {
        biaya = 2000;
    } else {
        biaya = 2000 + 500 * (parkir - 2);
    }

    // Menampilkan hasil
    printf("\n===== Struk Parkir =====\n");
    printf("Jam Masuk   : %d\n", masuk);
    printf("Jam Keluar  : %d\n", keluar);
    printf("Lama Parkir : %d jam\n", parkir);
    printf("Biaya Parkir: %d\n", biaya);

    return 0;
}

