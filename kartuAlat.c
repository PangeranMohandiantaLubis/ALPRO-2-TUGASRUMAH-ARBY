#include <stdio.h>

int main(void)
{
    char kodeAlat = 'M'; /* M = Multimeter */
    int tahunProduksi = 2023;
    float rentangUkurMaks = 600.0f; /* Volt AC/DC */

    printf("==============================\n");
    printf("   KARTU SPESIFIKASI ALAT UKUR\n");
    printf("==============================\n");
    printf("Nama Alat        : Multimeter Digital\n");
    printf("Kode Alat        : %c\n", kodeAlat);
    printf("Tahun Produksi   : %d\n", tahunProduksi);
    printf("Rentang Maks     : %.1f Volt\n", rentangUkurMaks);
    printf("==============================\n");

    return 0;
}