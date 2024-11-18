#include <stdio.h>

int main () {

    int Value;
    
    printf("Masukkan Nilai: ");
    scanf("%d", &Value);

    if (Value > 0){
        printf("Posiif");
    }
    else if (Value < 0){
        printf("Negatif");
    }
    else {
        printf("Nol");
    }
    return 0;
}