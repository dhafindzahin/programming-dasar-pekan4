/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 4 – Decision
 * Tugas : [3]
 * Deskripsi singkat: Menentukan ganjil atau genap
 * Tanggal: [09 September 2025]
 */

#include <stdio.h>

int main() {
    int input;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &input);

    if (input % 2 == 0) {
        printf("Bilangan tersebut adalah bilangan genap.\n");
    } else {
        printf("Bilangan tersebut adalah bilangan ganjil.\n");
    }

    return 0;
}
