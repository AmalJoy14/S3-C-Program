#include<stdio.h>
void main()
      {
      int limit,i,j,temp,TC=0;
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
      for (i=0;i<limit;i++)
          {
           TC++;
           for (j=i+1;j<limit;j++)
               {
                TC++;
                if (arr[i]>arr[j])
                   {
                    TC++;
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                    TC=TC+3;
                   }
               }
           }
      printf("Sorted array is:\n");
      for (i=0;i<limit;i++)
          {
           TC++;
           printf("%d  ",arr[i]);
           TC++;
          }
       printf("\nTime Complexity = %d\n",TC);
       printf("Space Complexity = %d\n",4*5+4*limit);
   }
