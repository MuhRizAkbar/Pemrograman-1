#include <stdio.h>

int main() {

    int Input, hr, min, sec;

    printf("Masukkan Nilai: ");
    scanf("%d", &Input);

    hr = Input/3600;
    min = (Input % 60) / 60;
    sec = Input % 60;

    printf("Jam: %02d:%02d:%02d", hr, min, sec);

    return 0;

}