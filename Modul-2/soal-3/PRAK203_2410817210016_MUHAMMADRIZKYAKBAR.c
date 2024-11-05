#include <stdio.h>

int main() 
{
    float a, b, i, j, x, y, hasil;

    printf("Masukkan Nilai a, b, i, j, x, y: ");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    
    hasil = (((a - b) * i) / j) - (x + y);
    
    printf("%.3f", hasil);  
    return 0;
    
}