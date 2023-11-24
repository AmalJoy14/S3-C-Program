#include<stdio.h>
#include<stdbool.h>
void enqueue(int queue[]);
void dequeue(int queue[]);
void peek(int queue[]);
void display(int queue[]);
int max,choice,rear=-1,front=0;
void main()
   {
    printf("Enter the maximum of queue:\n");
    scanf("%d",&max);
    int queue[max];
    while (true)
       {
        printf("==================\n");
        printf("Enter your choice:\n1.enqueue  2.dequeue  3.peek  4.display  5.exit\n");
        scanf("%d",&choice);
        if (choice==1)   
            enqueue(queue); 
        else if (choice==2)
            dequeue(queue);
        else if (choice==3)
            peek(queue);
        else if (choice==4)
            display(queue);
        else if (choice==5)
            break;
        else
            printf("Invalid Input\n");
         printf("==================\n");
       }
   }
   
void enqueue(int queue[])
   {
    if (rear==max-1)
        printf("OverFlow\n");
    else
       {
        rear=rear+1;
        printf("Enter the element:");
        scanf("%d",&queue[rear]);
       }
   }
     
void dequeue(int queue[])
   {
    if (rear<front)
        printf("UnderFlow\n");
    else 
       {
        printf("Element deleted is:");
        printf("%d\n",queue[front]);
        front=front+1;
       }
   }
   
void peek(int queue[])
   {
    if (rear<front)
        printf("Underflow\n");
    else
       {
        printf("The front element is:");
        printf("%d\n",queue[front]);
       }
   }
         
void display(int queue[])
   {
    if (rear<front)
        printf("Queue is Empty\n");
    else
       {
        printf("The queue is:\n");
        for (int i=front;i<=rear;i++)
           {
            printf("%d  ",queue[i]);
           }
        printf("\n");
       }   
   }
   
   
   
   
