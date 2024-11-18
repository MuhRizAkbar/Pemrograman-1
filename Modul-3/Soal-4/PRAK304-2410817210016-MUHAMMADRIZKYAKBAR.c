#include <stdio.h>

int main(){

    int Value;

    printf("Masukkan Nilai: ");
    scanf("%d", &Value);

    if (Value >= 100){printf("Anda Menginput Melebihi Limit Bilangan");}
    else if (Value >= 20){printf("Puluhan");}
    else if (Value >= 10){printf("Belasan");}
    else if (Value >= 1){printf("Satuan");}
    else if (Value = 0){printf("Nol");}
    else {printf("invalid");}
    return 0;
}