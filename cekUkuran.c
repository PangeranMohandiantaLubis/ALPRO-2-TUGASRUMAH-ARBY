#include <stdio.h>

int main(void)
{
    printf("=== Ukuran Tipe Data (dalam byte) ===\n");
    printf("int    : %zu byte\n", sizeof(int));
    printf("float  : %zu byte\n", sizeof(float));
    printf("double : %zu byte\n", sizeof(double));
    printf("char   : %zu byte\n", sizeof(char));

    return 0;
}