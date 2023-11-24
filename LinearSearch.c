#include<stdio.h>
void main()
      {
      int limit,check,count,i,TC=0;
      printf("Enter the limit:");
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
      printf("Enter the number to search:");
      scanf("%d",&check);
      TC++;
      for (i=0;i<limit;i++)
          {
           TC++;
           if (arr[i]==check)
               {
                TC++;
                count++;
                TC++;
               }
          }
      printf("The number is present %d times in the array\n",count);
      TC++;
      TC++;
      printf("\nTime Complexity=%d\n",TC); 
      TC++;   
      printf("Size of the array = %d*4B =%dB\nTotal Space Complexity=%d\n",limit,limit*4,4*5+limit*4);
      }
           
