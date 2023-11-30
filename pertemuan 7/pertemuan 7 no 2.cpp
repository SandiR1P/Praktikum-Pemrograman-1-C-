#include <stdio.h>

int main() {
    // Array untuk menyimpan nilai genap
    int A[11];
    // Counter untuk indeks array
    int counter = 0;

    // Data dari dokumen
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};

    // Menginput data dan menyimpan nilai genap ke dalam array
    for (int i = 0; i < 11; i++) {
        // Menyimpan nilai genap ke dalam array
        if (data[i] % 2 == 0) {
            A[counter] = data[i];
            counter++;
        }
    }

    // Mencetak nilai yang disimpan dalam array
    printf("Isi array setelah menyimpan nilai genap:\n");
    for (int i = 0; i < counter; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
