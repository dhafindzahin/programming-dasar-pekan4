/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 4 – Decision
 * Tugas : [3]
 * Deskripsi singkat: Bagi dua buah bilangan dan cek nol
 * Tanggal: [09 September 2025]
 */

#include <stdio.h>

int main() {
    float bilangan1, bilangan2;

    printf("Input: bilangan1 dan bilangan2\n");
    scanf("%d %d", &bilangan1, &bilangan2);

    if (bilangan2 == 0) {
        printf("Tidak bisa melakukan pembagian dengan nol (division by zero).\n");
    } else {
        printf("Hasil bagi bilangan1 dengan bilangan2 %.3f\n", bilangan1 / bilangan2);
    }

    return 0;
}
