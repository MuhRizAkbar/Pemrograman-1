#include <stdio.h>

void Crossnum(int a, int b) {
    int step = (a < b) ? 1 : -1;
    int x = a, y = b;

    while ((step == 1 && x <= b && y >= a) || (step == -1 && x >= b && y <= a)) {
        printf("%d %d", x, y);
        if ((step == 1 && x + step <= b && y - step >= a) || (step == -1 && x + step >= b && y - step <= a)) {
            printf(" - ");
        }
        x += step;
        y -= step;
    }
    printf("\n");
}

int main() {
    int angka1, angka2;
    printf("Masukkan angka: ");
    scanf("%d %d", &angka1, &angka2);

    Crossnum(angka1, angka2);

    return 0;
}
