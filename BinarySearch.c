#include<stdio.h>
void main()
      {
      int limit,i,j,temp,check,TC=0;
      printf("Enter the Limit:");
      scanf("%d",&limit);
      TC++;
      int arr[limit],left=0,right=limit-1,middle=(left+right)/2,flag=0;
      TC++;
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
      printf("\nEnter the number to search:");
      scanf("%d",&check);
      TC++;
      while (left<=right)
      {
          TC++;
          if (arr[middle]==check)
              {
               TC++;
               printf("The number is present at index %d in the array\n",middle);
                 TC++;
                 flag=1;
                 break;
              }
          else if (check<arr[middle])
              {
               TC++;
               right=middle-1;
               middle=(left+right)/2;
               TC=TC+2;
              }
          else if (check>arr[middle])
              {
               TC++;
               left=middle+1;
               middle=(left+right)/2;
               TC=TC+2;
              } 
      }
       if (flag==0)
          {
          TC++;
          printf("The number is not present\n") ;
          }
      printf("Time Complexity = %d\n",TC);
      printf("Space Complexity = %d\n",36+4*limit);
   }
    
    
    
    
    
    
    
    
    
    
    
    
