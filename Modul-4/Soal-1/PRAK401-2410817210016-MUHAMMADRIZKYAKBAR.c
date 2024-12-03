#include <stdio.h>

int main()
{
    int mtp, i;
    char pgt;

    printf("Kelipatan: ");
    scanf("%d", &mtp);
    printf("Pengganti: ");
    scanf(" %c", &pgt);

    for (i = 1; i <= 50; i++) {
        if (i % mtp == 0){
            printf("%c ", pgt);
            } else {
                printf("%d ", i);
            }

        if (i % 10 == 0){
            printf("\n");
            }
    }

return 0;
}