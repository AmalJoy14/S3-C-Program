#include<stdio.h>
#include<stdbool.h>
void push(int stack[]);
void pop(int stack[]);
void peek(int stack[]);
void display(int stack[]);
int max,choice,top=-1;
void main()
   {
    printf("Enter the maximum of stack:\n");
    scanf("%d",&max);
    int stack[max];
    while (true)
       {
        printf("==================\n");
        printf("Enter your choice:\n1.push  2.pop  3.peek  4.display  5.exit\n");
        scanf("%d",&choice);
        if (choice==1)   
            push(stack); 
        else if (choice==2)
            pop(stack);
        else if (choice==3)
            peek(stack);
        else if (choice==4)
            display(stack);
        else if (choice==5)
            break;
        else
            printf("Invalid Input\n");
         printf("==================\n");
       }
   }

void push(int stack[])
   {
    if (top==max-1)
        printf("Overflow\n");
    else
       {
        top=top+1;
        printf("Enter the number:");
        scanf("%d",&stack[top]);
       }
   }
   
void pop(int stack[])
   {
    if (top==-1)
        printf("Underflow\n");
    else
       {
        printf("Element deleted is:");
        printf("%d\n",stack[top]);
        top=top-1;
       }
   }
   
void peek(int stack[])
   {
    if (top==-1)
        printf("Underflow\n");
    else
       {
        printf("The top element is:");
        printf("%d\n",stack[top]);
       }
   }
 
void display(int stack[])
   {
   if (top==-1)
        printf("Stack is Empty\n");
    else
       {
        printf("The stack is:\n");
        for (int i=0;i<=top;i++)
           {
            printf("%d  ",stack[i]);
           }
        printf("\n");
       }
   }
   
        
           
 
 
 
 
 
 
 
 
 
 
   
           
    
     
