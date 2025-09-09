/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 4 – Decision
 * Tugas : [3]
 * Deskripsi singkat: Menentukan bilangan prima
 * Tanggal: [09 September 2025]
 */

#include <stdio.h>

int main() {
    int x;

    printf("Input: ");
    scanf("%d", &x);

	if (x <= 1) {
        printf("Output: %d bukan bilangan prima.\n", x);
    } else if (x == 2 || x == 3 || x == 5 || x == 7 || x == 11) {
        printf("Output: %d adalah bilangan prima.\n", x);
    } else if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0 || x % 7 == 0 || x % 11 == 0) {
        printf("Output: %d bukan bilangan prima.\n", x);
    } else {
        printf("Output: %d adalah bilangan prima.\n", x);
    }

    return 0;
}
