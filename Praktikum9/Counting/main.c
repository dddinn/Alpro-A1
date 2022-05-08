// Nama File : Counting.c
// Deskripsi : Mengurutkan data dengan counting sorting
// Pembuat : Dafa Kurnia Dinata - 24060121120003
// Tanggal Pembuatan : Minggu, 8 Mei 2022 18:15 WIB

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void CountingSort(int array[],int N,int max)
{
    //kamus lokal
    int i,j;
    int c[100]={0};

    //Algoritma
    for(i=0;i<N;i++){
        c[array[i]]=c[array[i]]+1;
    }
    for(i=0;i<=max;i++){
        for (j=1;j<=c[i];j++){
            printf("%d ",i);
        }
    }
}
int main()
{
    // Kamus
    int N,i,max=0;
    N=10;
    int array[] = {2,58,3,30,86,1,35,13,70,67};

    // Algoritma
    printf("Counting Sort");
    printf("\n Data : 2 58 3 30 86 1 35 13 70 67");
    printf("\n -----------------------------------\n");
    printf(" Hasil sorting : ");
    for (i=0;i<N;i++){
        if (array[i]>max){
            max=array[i];
        }
    }
    CountingSort(array,N,max);
    return 0;
}
