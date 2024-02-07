#include <stdio.h>

void swap(int arr[],int i,int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i + 1, high);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void main()
   {
    int limit, i;
    printf("Enter the size of array:\n");
    scanf("%d", &limit);
    int a[limit];
    printf("Enter the numbers to be sorted:\n");
    for (i = 0; i < limit; i++)
       {
        scanf("%d", &a[i]);
       }
    quickSort(a, 0, limit - 1);
    printf("\nSorted array:\n");
    for (i = 0; i < limit; i++)
       {
        printf("%d ", a[i]);
       }
    printf("\n");
   }
