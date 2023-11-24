#include<stdio.h>
void SelectionSort(int arr[],int limit);
int TC=0;
void main()
      {
      int limit,i;
      TC++;
      printf("Enter the Limit:");
      scanf("%d",&limit);
      TC++;
      int arr[limit];
      printf("Enter the numbers:\n");
      for (i=0;i<limit;i++)
          {
           TC++;
           scanf("%d",&arr[i]);
           TC++;
          }
      SelectionSort(arr,limit);
      printf("Sorted array is:\n");
      for (i=0;i<limit;i++)
          {
           TC++;
           printf("%d  ",arr[i]);
           TC++;
          }
       printf("\nTime Complexity = %d\n",TC);
       printf("Space Complexity = %d\n",4*7+4*limit);
      }
      
void SelectionSort(int arr[],int limit)
      {
       int i,j,min_index,temp;
       for (i=0;i<limit-1;i++)
          {
           TC++;
           min_index=i;
           TC++;
           for (j=i+1;j<limit;j++)
             {
              TC++;
              if (arr[j]<arr[min_index])
                {
                TC++;
                min_index=j;
                TC++;
                }
             }
          temp=arr[min_index];
          arr[min_index]=arr[i];
          arr[i]=temp;
          TC=TC+3;
          }
      }
