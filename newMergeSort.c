#include <stdio.h>

void merge(int arr[], int left, int middle, int right)
   {
    int i, j, k;
    int n1 = middle - left ;
    int n2 = right - middle + 1;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
       {
        if (L[i] <= R[j])
           {
            arr[k] = L[i];
            i++;
            k++;
           }
	    else
           {
            arr[k] = R[j];
            j++;
            k++;
           }
      }
    while (i < n1)
       {
	arr[k] = L[i];
	i++;
	k++;
       }
    while (j < n2)
       {
	arr[k] = R[j];
	j++;
	k++;
       }
   }

void mergeSort(int arr[], int left, int right)
   {
    if (left < right)
       {
	int middle = (left+right) / 2;
	mergeSort(arr, left, middle);
	mergeSort(arr, middle + 1, right);
	merge(arr, left, middle, right);
       }
   }

void main()
   {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n ");
    for (int i = 0; i < n; i++)
       {
	scanf("%d", &arr[i]);
       }

    printf("Array before Merge Sort:\n");
    for (int i = 0; i < n; i++)
	printf("%d ", arr[i]);
    printf("\n");
    mergeSort(arr, 0, n - 1);

    printf("Array after Merge Sort: \n");
    for (int i = 0; i < n; i++)
	printf("%d ", arr[i]);
    printf("\n");
}
