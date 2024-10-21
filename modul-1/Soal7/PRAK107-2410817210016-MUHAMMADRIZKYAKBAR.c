#include <stdio.h>

int main ()
{
    int a = 4, b = 5, c = 7, harga=85000, keliling;
    keliling = a + b + c;

    printf("Diketahui:\nPanjang sisi segitiga berturut-turut adalah %d,%d, dan %d\n", a,b,c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\nJawaban:\n",harga);
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d ",keliling*harga);

}

