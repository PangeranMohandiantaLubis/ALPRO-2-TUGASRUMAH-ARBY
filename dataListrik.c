#include <stdio.h>

int main(void) {
    float resistansi, tegangan, arus;

    printf("=== Input Besaran Listrik ===\n");

    printf("Masukkan resistansi (R) dalam Ohm : ");
    scanf("%f", &resistansi);

    printf("Masukkan tegangan (V) dalam Volt  : ");
    scanf("%f", &tegangan);

    printf("Masukkan arus (I) dalam Ampere    : ");
    scanf("%f", &arus);

    printf("\n=== Data yang Dimasukkan ===\n");
    printf("Resistansi (R) : %.2f Ohm\n", resistansi);
    printf("Tegangan   (V) : %.2f Volt\n", tegangan);
    printf("Arus       (I) : %.2f Ampere\n", arus);

    return 0;
}