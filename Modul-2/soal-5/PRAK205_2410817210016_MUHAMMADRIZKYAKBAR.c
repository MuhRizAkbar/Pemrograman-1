#include <stdio.h>
#include <math.h>

int main() {

    float A, B, C, keliling, luas;

    printf("Masukkan Nilai : ");
    scanf("%f %f", &A, &B);

    C = sqrt(B * B - A * A); 

    keliling = A + B + C;

    luas = 0.5 * C * A; 

    printf("Alas = %.0f cm\n", C);
    printf("Tinggi = %.0f cm\n", A);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}
