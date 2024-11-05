#include <stdio.h>

int main() 
{
    // Test Case 1
    float nA1, nB1, hasil1;

    printf("Masukkan Nilai Pertama :" );
    scanf("%f", &nA1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nB1);

    hasil1 = nA1+nB1;

    printf("Hasil Dari Penjumlahan Nilai Pertama \"%.2f\" dan Nilai Kedua \"%.2f\" adalah \"%.2f\" \n", nA1, nB1, hasil1);

    // Test Case 2
    float nA2, nB2, hasil2;

    printf("Masukkan Nilai Pertama :" );
    scanf("%f", &nA2);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nB2);

    hasil2 = nA2+nB2;

    printf("Hasil Dari Penjumlahan Nilai Pertama \"%.2f\" dan Nilai Kedua \"%.2f\" adalah \"%.2f\"", nA2, nB2, hasil2);


}