#include<stdio.h>
#include<stdbool.h>
void enqueue(int Cqueue[]);
void dequeue(int Cqueue[]);
void display(int Cqueue[]);
int max,choice,rear=-1,front=-1;
void main()
   {
    printf("Enter the maximum of Circular queue:\n");
    scanf("%d",&max);
    int Cqueue[max];
    while (true)
       {
        printf("==================\n");
        printf("Enter your choice:\n1.enqueue  2.dequeue  3.display  4.exit\n");
        scanf("%d",&choice);
        if (choice==1)   
            enqueue(Cqueue); 
        else if (choice==2)
            dequeue(Cqueue);
        else if (choice==3)
            display(Cqueue);
        else if (choice==4)
            break;
        else
            printf("Invalid Input\n");
         printf("==================\n");
       }
   }
     
void enqueue(int Cqueue[])
   {
    if(front==-1 && rear==-1)
       {
        front=0,rear=0;
        printf("Enter the element:");
        scanf("%d",&Cqueue[rear]);
       }
    else if (front==(rear+1)%max)
        printf("OverFlow\n");
    else
       {
        rear=(rear+1)%max;
        printf("Enter the element:");
        scanf("%d",&Cqueue[rear]);   
       }
   }
        
void dequeue(int Cqueue[])
   {
    if (front==-1 && rear==-1)
        printf("UnderFlow\n");
    else if (rear==front)
       {
        printf("Element deleted is:%d\n",Cqueue[front]);
        front=-1;
        rear=-1;    
       }
    else
       {
        printf("Element deleted is:%d\n",Cqueue[front]);
        front=(front+1)%max;
       }
   }      
   
void display(int Cqueue[])
   {   
    if (front==-1 && rear==-1)
        printf("UnderFlow\n");
    else
       {
        printf("The Circular queue is:\n");
        int i;
        for ( i=front;i!=rear;i=(i+1)%max)
           {
             printf("%d  ",Cqueue[i]);
           }
        printf("%d\n",Cqueue[i]);
        printf("front positioned at %d\n",front);
        printf("rear positioned at %d\n",rear);
       }   
   }
   
   
   
   
   
   
   
   
   
