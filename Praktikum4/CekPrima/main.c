/*Nama File : CekPrima */
/*Deskripsi : Mengetahui sebuah bilangan integer sembarang apakah bilangan prima atau bukan N*/
/*Pembuat   : Dafa Kurnia Dinata - 24060121120003*/
/*Tgl pembuatan : Senin, 21-03-2022 23:37 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    //Kamus
    int N,i,counter;

    //Algoritma
    printf("Masukan bilangan : ");
    scanf("%d",&N);
    if(N<=2){
        if(N<=1){
            printf("Masukan tidak valid");
        }else{
            printf("%d adalah bilangan prima \n",N);
        }
    }else{
        for(i=2;i<N;i++){
            if(N%i==0){
                counter = 0;
                break;
            }else{
                counter = 1;
            }
        }
        if(counter==0){
            printf("%d adalah bukan bilangan prima \n",N);
            }else{
            printf("%d adalah bilangan prima \n",N);
        }
    }
    return 0;
}
