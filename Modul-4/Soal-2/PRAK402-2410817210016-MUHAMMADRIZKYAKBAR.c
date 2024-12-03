#include <stdio.h>

int main(){
    
    int limit, i;

    printf("Limit: ");
    scanf("%d", &limit);

    printf("");
    for (i = 1; i <= limit; i += 2){
        printf("%d", i);
        printf(" ");
    }
    printf("\n");


    printf("");
    for (i = limit; i >= 2; i -= 2){
        printf("%d", i);
        printf(" ");
    }
    printf("\n");

    return 0;
}