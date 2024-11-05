#include <stdio.h>

int main() {
    char Nama[30], NIM[20], KP[5], TTL[50], Alamat[100], Hobby[30], NHP[15];

    printf("Nama                    : ");
    fgets(Nama, sizeof(Nama), stdin);
    printf("NIM                     : ");
    fgets(NIM, sizeof(NIM), stdin);
    printf("Kelas Paralel           : ");
    fgets(KP, sizeof(KP), stdin);
    printf("Tempat/Tanggal Lahir    : ");
    fgets(TTL, sizeof(TTL), stdin);
    printf("Alamat                  : ");
    fgets(Alamat, sizeof(Alamat), stdin);
    printf("Hobby                   : ");
    fgets(Hobby, sizeof(Hobby), stdin);
    printf("No. HP                  : ");
    fgets(NHP, sizeof(NHP), stdin);

    printf("Nama                    : %s", Nama);
    printf("NIM                     : %s", NIM);
    printf("Kelas Paralel           : %s", KP);
    printf("Tempat/Tanggal Lahir    : %s", TTL);
    printf("Alamat                  : %s", Alamat);
    printf("Hobby                   : %s", Hobby);
    printf("No. HP                  : %s", NHP);

    return 0;
}



