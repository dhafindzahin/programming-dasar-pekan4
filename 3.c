/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 4 – Decision
 * Tugas : [3]
 * Deskripsi singkat: Tambahan menentukan diskon
 * Tanggal: [09 September 2025]
 */

#include <stdio.h>

int main() {
    float purchaseTotal;
    float finalTotal;
    float discountRate = 0.05;

    printf("Masukkan total pembelian (Rp.): ");
    scanf("%f", &purchaseTotal);

    if (purchaseTotal >= 100000.0) {
        finalTotal = purchaseTotal * (1 - discountRate);
        printf("Anda mendapat potongan harga sebesar 5%%.\n");
        printf("Total yang harus dibayarkan adalah Rp. %.2f\n", finalTotal);
    } else {
        finalTotal = purchaseTotal;
        printf("Total pembelian adalah Rp. %.2f\n", finalTotal);
        printf("Anda tidak mendapatkan diskon.\n");
    }

    return 0;
}
