#include <stdio.h>
int main() {
  int A[11]; // deklarasi array A dengan ukuran 11
  int data; // variabel untuk menyimpan data yang diinput
  int i, j; // variabel untuk indeks array
  int n = 0; // variabel untuk menghitung jumlah data yang valid
  
  // menginput data dari dokumen
  printf("Masukkan data dari dokumen:\n");
  scanf("%d", &data); // membaca data pertama
  while (data != 999 && n < 11) { // selama data bukan 999 dan array masih ada tempat
    // menyimpan data ke dalam array sesuai dengan posisi yang sama dalam dokumen
    A[n] = data;
    n++; // menambah jumlah data yang valid
    scanf("%d", &data); // membaca data berikutnya
  }
  
  // menampilkan isi array A
  printf("Isi array A:\n");
  for (i = 0; i < 11; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
  
  // mengosongkan array A
  for (i = 0; i < 11; i++) {
    A[i] = 0;
  }
  n = 0; // mengatur ulang jumlah data yang valid
  
  // menginput data dari dokumen
  printf("Masukkan data dari dokumen:\n");
  scanf("%d", &data); // membaca data pertama
  while (data != 999 && n < 11) { // selama data bukan 999 dan array masih ada tempat
    // menyimpan data ke dalam array sesuai dengan urutan letak data dalam dokumen
    // hanya bila data yang diinput bernilai lebih besar dari 9
    if (data > 9) {
      A[n] = data;
      n++; // menambah jumlah data yang valid
    }
    scanf("%d", &data); // membaca data berikutnya
  }
  
  // menampilkan isi array A
  printf("Isi array A:\n");
  for (i = 0; i < 11; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
  
  // mengosongkan array A
  for (i = 0; i < 11; i++) {
    A[i] = 0;
  }
  n = 0; // mengatur ulang jumlah data yang valid
  
  // menginput data dari dokumen
  printf("Masukkan data dari dokumen:\n");
  scanf("%d", &data); // membaca data pertama
  while (data != 999 && n < 11) { // selama data bukan 999 dan array masih ada tempat
    // menyimpan data ke dalam array berderetan
    // hanya bila data yang diinput bernilai lebih besar dari 9
    if (data > 9) {
      A[n] = data;
      n++; // menambah jumlah data yang valid
    }
    scanf("%d", &data); // membaca data berikutnya
  }
  
  // menampilkan isi array A
  printf("Isi array A:\n");
  for (i = 0; i < 11; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
  
  // mengosongkan array A
  for (i = 0; i < 11; i++) {
    A[i] = 0;
  }
  n = 0; // mengatur ulang jumlah data yang valid
  
  // menginput data dari dokumen
  printf("Masukkan data dari dokumen:\n");
  scanf("%d", &data); // membaca data pertama
  while (data != 999 && n < 11) { // selama data bukan 999 dan array masih ada tempat
    // menyimpan data ke dalam array berderetan
    // hanya bila data yang diinput bernilai ganjil
    if (data % 2 == 1) {
      A[n] = data;
      n++; // menambah jumlah data yang valid
    }
    scanf("%d", &data); // membaca data berikutnya
  }
  
  // menampilkan isi array A
  printf("Isi array A:\n");
  for (i = 0; i < 11; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
  
  // mengosongkan array A
  for (i = 0; i < 11; i++) {
    A[i] = 0;
  }
  n = 0; // mengatur ulang jumlah data yang valid
  
  // menginput data dari dokumen
  printf("Masukkan data dari dokumen:\n");
  scanf("%d", &data); // membaca data pertama
  while (data != 999 && n < 11) { // selama data bukan 999 dan array masih ada tempat
    // menyimpan data ke dalam array sesuai dengan posisi yang sama dalam dokumen
    // hanya bila data yang diinput bernilai ganjil
    if (data % 2 == 1) {
      A[n] = data;
      n++; // menambah jumlah data yang valid
    }
    scanf("%d", &data); // membaca data berikutnya
  }
  
  // menampilkan isi array A
  printf("Isi array A:\n");
  for (i = 0; i < 11; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
  
  return 0;
}
