#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void insertion_front();
void insertion_end();
int insertion_pos();
void deletion_front();
void deletion_end();
void deletion_pos();
void display();
struct node 
   {
    int data;
    struct node *link;
   }*head=NULL,*temp,*ptr;
void main()
   {
    int choice;
    while (true)
       {
        printf("=============================\n");
        printf("Enter your choice:\n1.Insertion at front\n2.Insertion at end\n3.Insertion at any position\n4.Deletion from front\n5.Deletion from end\n6.Deletion from any position\n7.Display\n8.exit\n");
        scanf("%d",&choice);
        if (choice == 1)
            insertion_front();
        else if (choice == 2)
            insertion_end();
        else if (choice == 3)           
            insertion_pos();           
        else if (choice == 4)           
            deletion_front();           
        else if (choice == 5)           
            deletion_end();           
        else if (choice == 6)           
            deletion_pos();           
        else if (choice == 7)           
            display();          
        else if (choice == 8)           
            break;           
        else 
           printf("Invalid Input\n");
      }
   }
   
void insertion_front()
   {
    temp=(struct node*)malloc(sizeof(struct node));
    if (temp==NULL)
        printf("No Insertion,no newnode found\n");
    else 
       {
        printf("Enter the element:");
        scanf("%d",&temp->data);
        temp->link=head;
        head = temp;
       }
    }
    
void insertion_end()
   {
    temp=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    while (ptr->link!=NULL)
       ptr=ptr->link;
    ptr->link=temp;
    printf("Enter the element:");
    scanf("%d",&temp->data);
    temp->link=NULL;
   }
   
int insertion_pos()
   {
    if (head==NULL)
       {
        printf("Empty List\n");
        return 0;
       }
    int key;
    temp=(struct node*)malloc(sizeof(struct node));   
    printf("Enter the element:");
    scanf("%d",&temp->data);
    printf("Enter the element after which the newnode is to be placed:");
    scanf("%d",&key);
    ptr=head;
    while (ptr->data!=key && ptr->link !=NULL)
        ptr=ptr->link;
    if (ptr->link==NULL)
        printf("Invalid Input: Ensure that insertion is taking place between two valid nodes\n");
    else
       {
        temp->link=ptr->link;
        ptr->link=temp;
       }
   }   
    
void deletion_front()
   {
    if (head == NULL)
        printf("UnderFlow\n");
    else
       {
        ptr=head;
        head=ptr->link;
        free(ptr);
       }
   }    

void deletion_end()
   {
    if (head==NULL)
        printf("UnderFlow\n");
    else if (head->link==NULL)
       {
        ptr=head;
        head=NULL;
        free(ptr);
       }
    else 
       {
        ptr=head;
        temp=head->link;
        while (temp->link!=NULL)
           {
            ptr=temp;
            temp=temp->link;
           }
        ptr->link=NULL;
        free(temp);
       }
   }
   
void deletion_pos()
   {
    int i=1,pos;
    temp=head;
    if (head==NULL)
        printf("Underflow\n");
    else 
       {
        printf("Enter the position of the node that is to be deleted:");   
        scanf("%d",&pos);
        if (pos==1)
           deletion_front();
        else{
            while (i<(pos-1))
               {
                temp=temp->link;
                i++;
               }
            ptr=temp->link;
            temp->link=ptr->link;
            free(ptr);
            }
       }
   }      
        
void display()
   {
    if (head==NULL)
       {
        printf("Underflow\n");
       }
    else
       {
        ptr=head;
        printf("%d ",ptr->data);
        while (ptr->link!=NULL)
           {
            ptr=ptr->link;
            printf("%d ",ptr->data);
           }
        printf("\n");
       }
   }     
    
    
    
    
