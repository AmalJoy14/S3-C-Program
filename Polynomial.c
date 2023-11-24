#include<stdio.h>
void main()
    {
     struct poly{
       int coef;
       int exp;
       }p[20];
     int limit,i;
     printf("Enter the number of terms in the polynomial:\n");
     scanf("%d",&limit);
     for (i=0;i<limit;i++)
         {
          printf("Enter the coefficient of term%d :",i+1);
          scanf("%d",&p[i].coef);
          printf("Enter the exponent of term%d    :",i+1);
          scanf("%d",&p[i].exp);
         }
     printf("\nThe given polynomial is,\n");
     for (i=0;i<limit;i++)
         {
          printf("%dx^%d",p[i].coef,p[i].exp);
          if (i<limit-1)
             printf(" + ");
         }
     printf("\n");    
    }
         
     
