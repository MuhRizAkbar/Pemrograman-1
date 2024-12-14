#include <stdio.h>

int maksimal(int a, int b) {
    return (a > b) ? a : b;
}

int minimal(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int batas = 0;
    int maks = -100000;
    int min = 100000;
    int bilangan;

    scanf("%d", &bilangan);

    while (batas < bilangan) {
        int nilai;
        scanf("%d", &nilai);
        maks = maksimal(maks, nilai);
        min = minimal(min, nilai);
        batas++;
    }

    printf("%d %d", maks, min);

    return 0;
}