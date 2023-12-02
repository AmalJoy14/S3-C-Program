#include<stdio.h>
void main()
   {
    int i,j,temp,limit,a[30];
    printf("Enter size of array:\n");
    scanf("%d",&limit);
    printf("Enter the elements :\n");
    for (int i=0;i<limit;i++)
       {
        scanf("%d",&a[i]);
       }
    i=1;
    while (i<limit)
       {
        j=i;
        while(a[j]<a[j-1])
           {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
           }
        i++;
       }
    printf("\nSorted array:\n");
    for (int i=0;i<limit;i++)
       {
        printf("%d ",a[i]);
       }
    printf("\n");
   }
        
    
