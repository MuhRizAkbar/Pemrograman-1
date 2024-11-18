#include <stdio.h>

int main () 
{
    int nilai;

    printf("Masukkan Nilai 1-100: ");
    scanf("%d", &nilai);

    if (nilai >=80) {printf ("A");}
    else if (nilai >=70) {printf ("B");}
    else if (nilai >=60) {printf ("C");}
    else if (nilai >=50) {printf ("D");}
    else if (nilai < 50) {printf ("E");}
    return 0;

}