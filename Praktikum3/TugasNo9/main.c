/*Nama File : TugasNo9 */
/*Deskripsi : Mengklasifikasikan nama-nama hari dari nomor hari*/
/*Pembuat   : Dafa Kurnia Dinata - 24060121120003*/
/*Tgl pembuatan : Senin, 14-03-2022 12:03 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //kamus
    int i;
    //algoritma
    printf("Pengecekan Bulan \n");
    printf("masukkan nomor bulan : ");
    scanf ( "%d", &i);

    switch (i) {
        case 1 :
            printf("Januari");
            break;
        case 2 :
            printf("Februari");
            break;
        case 3 :
            printf("Maret");
            break;
        case 4 :
            printf("April");
            break;
        case 5 :
            printf("Mei");
            break;
        case 6 :
            printf("Juni");
            break;
        case 7 :
            printf("Juli");
            break;
        case 8 :
            printf("Agustus");
            break;
        case 9 :
            printf("September");
            break;
        case 10 :
            printf("Oktober");
            break;
        case 11 :
            printf("November");
            break;
        case 12 :
            printf("Desember");
            break;
        default:
        printf("Masukkan nomor bulan tidak tepat");
        }
    return 0;
}
