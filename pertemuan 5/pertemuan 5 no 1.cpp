#include <stdio.h>

int main() {
	
    int jamMasuk, jamPulang, lamaBekerja;

    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jamMasuk);

    printf("Masukkan jam pulang (1-12): ");
    scanf("%d", &jamPulang);

    if (jamPulang >= jamMasuk) {
        lamaBekerja = jamPulang - jamMasuk;
    } else {

        lamaBekerja = (12 - jamMasuk) + jamPulang;
    }

    printf("Lama bekerja: %d jam\n", lamaBekerja);

    return 0;
}

