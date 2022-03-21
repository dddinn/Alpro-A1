/*Nama File : FaktorBil */
/*Deskripsi : Menentukan faktor-faktor bilangan dari bilangan integer sembarang */
/*Pembuat   : Dafa Kurnia Dinata - 24060121120003*/
/*Tgl pembuatan : Senin, 21-03-2022 22:15 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
//Kamus
    int N,i;

    //Algoritma
    printf("Masukan bilangan : ");
    scanf("%d",&N);
    printf("Faktornya : ");
    if(N>0){
        for(i=1;i<=N;i++){
            if(N % i == 0){
                printf(" %d ",i);
            }
        }
    }else {
        printf("Bilangan tidak boleh kurang dari 0\n");
    }
    return 0;
}

