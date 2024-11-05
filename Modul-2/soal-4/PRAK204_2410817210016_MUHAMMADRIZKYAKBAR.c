#include <stdio.h>
#define pi 22.0/7.0

int main ()
{
    double jari, tinggi;
    double kel, vol, luas;

    printf("Masukkan Jari Jari : ");
    scanf("%lf", &jari);
    printf("Masukkan Tinggi Bejana : ");
    scanf("%lf", &tinggi);

    vol = pi * jari * jari * tinggi;
    luas = 2 * pi  * jari * (jari + tinggi);
    kel = 2 * pi * jari;

    printf("Volume = %.2lf\n", vol);
    printf("Luas = %.2lf\n", luas);
    printf("Keliling = %.2lf\n", kel);
    return 0;
}