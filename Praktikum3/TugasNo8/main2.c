/*Nama File : TugasNo8 */
/*Deskripsi : Mengklasifikasikan nama-nama hari dari nomor hari*/
/*Pembuat   : Dafa Kurnia Dinata - 24060121120003*/
/*Tgl pembuatan : Senin, 14-03-2022 11:42 WIB*/

int main ()
{
    //kamus
    int i;
    //algoritma
    printf("Pengecekan Hari \n");
    printf("masukkan nomor hari : ");
    scanf ( "%d", &i);

    switch (i) {
        case 1 :
            printf("Senin");
            break;
        case 2 :
            printf("Selasa");
            break;
        case 3 :
            printf("Rabu");
            break;
        case 4 :
            printf("Kamis");
            break;
        case 5 :
            printf("Jumat");
            break;
        case 6 :
            printf("Sabtu");
            break;
        case 7 :
            printf("Minggu");
            break;

        default:
        printf("Masukkan nomor bulan tidak tepat");
        }
    return 0;
}
