// Nama File : Selection.c
// Deskripsi : Mengurutkan data dengan selection sorting
// Pembuat : Dafa Kurnia Dinata - 24060121120003
// Tanggal Pembuatan : Minggu, 8 Mei 2022 19:23 WIB

#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int arr[], int N)
{
    //Kamus Lokal
    int i;
    int j;
    int min;
    int temp;

    //Algoritma
    for(i=0; i<(N-1); i++)
    {
        min = i;

        for(j=(i+1); j<N; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    //Kamus
    int N, i, j;
    int array[] = {2,58,3,30,86,1,35,13,70,67};

    //Algoritma
    printf("Selection Sort \n");
    printf("Masukkan jumlah data: ");
    scanf("%d", &N);
    printf("Masukkan %d data : \n", N);

    for(i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }

    SelectionSort(array, N);
    printf("Hasil sorting :\n");
        for(i=0; i<N; i++)
        {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
