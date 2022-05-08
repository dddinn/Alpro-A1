// Nama File : Bubble.c
// Deskripsi : Mengurutkan data dengan bubble sorting
// Pembuat : Dafa Kurnia Dinata - 24060121120003
// Tanggal Pembuatan : Minggu, 8 Mei 2022 21:23 WIB

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int array[], int N){
    // Kamus Lokal
    int i, j, temp;

    // Algoritma
    for(i =0; i<N; i++)
    {
        for(j=0; j<N-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){
    // Kamus
    int N, i, j;
    int array[] = {2,58,3,30,86,1,35,13,70,67};

    // Algoritma
    printf("Bubble Sort \n");
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);
    printf("Masukkan %d data : \n", N);

        for(i=0; i<N; i++)
        {
        scanf("%d", &array[i]);
    }

    BubbleSort(array, N);
    printf("Hasil sorting : \n");
        for(i =0; i<N; i++)
        {
    printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
