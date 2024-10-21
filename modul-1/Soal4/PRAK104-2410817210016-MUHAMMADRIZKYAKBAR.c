#include <stdio.h>

int main()
{
    int hargaA,hargaB,diskonA,diskonB;
    hargaA = 400000;
    hargaB = 350000;
    diskonA = (hargaA * 87)/100;
    diskonB = (hargaB * 79)/100;
    printf("Harga sepatu A adalah %d\n", hargaA);
    printf("Harga sepatu B adalah %d\n", hargaB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", diskonA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d", diskonB);
     
}