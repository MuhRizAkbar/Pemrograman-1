#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Masukkan 3 Bilangan : ");
    scanf("%d %d %d", &a, &b, &c);

    int op;
    if(a > b){
        op = a;
        a = b;
        b = op;
    }

    if(b > c){
        op = b;
        b = c;
        c = op;
    }

    if(a > b){
        op = b;
        b = a;
        a = op;
    }

   printf("%d %d %d", a, b, c);
}