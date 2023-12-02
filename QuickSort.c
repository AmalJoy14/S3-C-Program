#include <stdio.h>
void quickSort(int array[],int size);

void main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];

    printf("Enter the values: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    quickSort(array, size);
    
    printf("\nThe sorted array is: ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);   
    printf("\n");
}

void quickSort(int array[],int size){
    int pivotindex=0;
    int pivot=array[pivotindex];
    int storeindex=pivotindex+1;

    for(int i=0;i<size;i++){
        if(array[i]<array[pivotindex]){
            int temp=array[i];
            array[i]=array[storeindex];
            array[storeindex]=temp;
            storeindex++;
        }
    }

    int temp=array[pivotindex];
    array[pivotindex]=array[storeindex-1];
    array[storeindex-1]=temp;

    if (storeindex - 1 > 1) {
        quickSort(array, storeindex - 1);
    }
    if (size - storeindex > 1) {
        quickSort(array + storeindex, size - storeindex);
    }
}
