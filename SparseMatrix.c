#include<stdio.h>
void main()
    {
     int row,col,i,j,k=1,count=0;
     printf("Enter the order of the sparse matrix:\n");
     scanf("%d%d",&row,&col);
     int matrix[row][col];
     printf("Enter the elements of the sparse matrix:\n");
     for (i=0;i<row;i++)
         {
          for (j=0;j<col;j++)
              {
               scanf("%d",&matrix[i][j]);
              }
         }
     struct sparse{
         int srow,scol,val;
         }s[10];
     for (i=0;i<row;i++)
         {
          for (j=0;j<col;j++)
              {
               if (matrix[i][j]!=0)
                {
                 s[k].srow=i;
                 s[k].scol=j;
                 s[k].val=matrix[i][j];
                 count++;
                 k++;
                }
              }
         }
     s[0].srow=row;
     s[0].scol=col;
     s[0].val=count;
     //Program for printing the triplet form
     printf("Row  Col  Value\n");
     for (i=0;i<=count;i++)
         {
          printf("%d    %d    %d\n",s[i].srow,s[i].scol,s[i].val);
         }
     }    
             
             
             
             
             
             
             
             
                  
