// Nama File : Insertion.c
// Deskripsi : Mengurutkan data dengan insertion sorting
// Pembuat : Dafa Kurnia Dinata - 24060121120003
// Tanggal Pembuatan : Minggu, 8 Mei 2022 20:47 WIB

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void InsertionSort(int array[],int N)
{
    //kamus lokal
    int i,j,min,temp;

    //Algoritma
    for (i=1;i<N;i++){
        temp=array[i];
        j=i-1;
        while (j>=0 && array[j]>temp){
            array[j+1]=array[j];
            array[j]=temp;
            j=j-1;
        }
    }
}

int main()
{
    // Kamus
    int N,i;
    N=10;
    int array[] = {2,58,3,30,86,1,35,13,70,67};

    // Algoritma
    printf("Insertion Sort \n");
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);
    printf("Masukkan %d data : \n", N);
        for(i=0; i<N; i++)
        {
        scanf("%d", &array[i]);
    }

    InsertionSort(array,N);
    printf("Hasil sorting : ");
        for (i=0; i<N; i++)
            {
         printf("%d ", array[i]);
    }
    return 0;
}
