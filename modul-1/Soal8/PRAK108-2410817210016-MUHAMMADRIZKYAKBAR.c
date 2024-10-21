#include <stdio.h>

int main ()
{
    float phi = 3.14; 
    int kel = 5, jarak = 14;
    printf ("Diketahui:\nPak Dengklek mengelilingi taman = %d putaran\n", kel);
    printf ("Jarak tempuh Pak Dengklek = %d Kilometer\n",jarak);
    printf ("\nJawaban :\nJari-jari taman yang dikelilingi Pak Dengklek adalah %.2f kilometer",jarak/(2*phi*kel));
}