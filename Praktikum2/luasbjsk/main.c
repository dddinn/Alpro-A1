/*Nama File	: luasbjsk.c*/
/*Deskripsi	: Menghitung luas bujursangkar*/
/*Pembuat	: Dafa Kurnia Dinata - 24060121120003*/
/*Tgl pembuatan	: Minggu, 06-03-2022 02:30 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int S; //Sisi bujursangkar
    int Luas; //Luas bujursangkar

/*Algoritma*/
    printf("======Menghitung Luas Bujursangkar=======\n");
    printf("=========================================\n");
    printf("Masukkan sisi = ");
    scanf("%d", &S);
    Luas=S*S;
    printf("\n=========================================\n");
    printf("Luas bujursangkar (S x S)==> %d X %d = %d\n",S,S,Luas);
    printf("=========================================\n");
    return 0;
}
