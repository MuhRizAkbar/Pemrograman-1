#include <stdio.h>
#include <stdlib.h>

void kalkulator() {
    int OP;
    double num1, num2, hasil;

    while (1) {
        printf("\nPilih Program:\n");
        printf("1. Penjumlahan (+)\n");
        printf("2. Pengurangan (-)\n");
        printf("3. Perkalian (*)\n");
        printf("4. Pembagian (/)\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan(1-5): ");
        scanf("%d", &OP);

        if (OP == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Akbar!\n");
            break;
        }

        if (OP >= 1 && OP <= 4) {
            printf("Angka Pertama: ");
            scanf("%lf", &num1);
            printf("Angka Kedua: ");
            scanf("%lf", &num2);

            switch (OP) {
                case 1:
                    hasil = num1 + num2;
                    printf("Hasil: %.2lf\n", hasil);
                    break;
                case 2:
                    hasil = num1 - num2;
                    printf("Hasil: %.2lf\n", hasil);
                    break;
                case 3:
                    hasil = num1 * num2;
                    printf("Hasil: %.2lf\n", hasil);
                    break;
                case 4:
                    if (num2 != 0) {
                        hasil = num1 / num2;
                        printf("Hasil: %.2lf\n", hasil);
                    } else {
                        printf("Error: Tidak bisa dibagi 0\n");
                    }
                    break;
            }
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }
}

int main() {
    kalkulator();
    return 0;
}
