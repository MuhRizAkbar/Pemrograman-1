#include <stdio.h>
#include <math.h>

int main(){
    int a = 5, t = 12, sA, sB, sC;
    sA = t;
    sB = sqrt ((a*a)+(t*t));
    sC = a;

    printf("diketahui: \nAlas = %d cm\n", a);
    printf("Tinggi = %d cm\n\n", t);
    printf("jawab \n");
    printf("Sisi A = %d cm\n", sA);
    printf("Sisi B = %d cm\n", sB);
    printf("Sisi C = %d cm\n", sC);
    printf("Keliling= %d cm\n", sA + sB + sC);
    printf("Luas = %dcm", (a*t)/2);


}