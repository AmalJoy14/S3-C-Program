#include<stdio.h>
#include<stdlib.h>
struct poly *createPoly();
void displayPoly(struct poly *head);

struct poly
   {
    int coef,exp;
    struct poly *link;
   }*phead=NULL,*qhead=NULL,*rhead=NULL,*p,*q,*r;

void main()
   {
    phead=createPoly();
    displayPoly(phead);
    qhead=createPoly();
    displayPoly(qhead);
    
    p=phead;
    q=qhead;
    struct poly *ptr,*temp;
    while (p!=NULL && q!=NULL)
       {
        if (p->exp > q->exp)
           {
            temp=(struct poly*)malloc(sizeof(struct poly));
            temp->coef=p->coef;
            temp->exp=p->exp;
            temp->link=NULL;
            p=p->link;
            if (rhead==NULL)
               {
                rhead=temp;
                ptr=rhead;
               }
            else
               {
                ptr->link=temp;
                ptr=ptr->link;
               }
           }
        else if (p->exp < q->exp)
           {
            temp=(struct poly*)malloc(sizeof(struct poly));
            temp->coef=q->coef;
            temp->exp=q->exp;
            temp->link=NULL;
            q=q->link;
            if (rhead==NULL)
               {
                rhead=temp;
                ptr=rhead;
               }
            else
               {
                ptr->link=temp;
                ptr=ptr->link;
               }
           }
        else if (p->exp == q->exp)
           {
            temp=(struct poly*)malloc(sizeof(struct poly));
            temp->coef=p->coef + q->coef;
            temp->exp=p->exp;
            temp->link=NULL;
            p=p->link;
            q=q->link;
            if (rhead==NULL)
               {
                rhead=temp;
                ptr=rhead;
               }
            else
               {
                ptr->link=temp;
                ptr=ptr->link;
               }
           }
      }
        while (p!=NULL)
           {
            temp=(struct poly*)malloc(sizeof(struct poly));
            temp->coef=p->coef;
            temp->exp=p->exp;
            temp->link=NULL;
            p=p->link;
            if (rhead==NULL)
               {
                rhead=temp;
                ptr=rhead;
               }
            else
               {
                ptr->link=temp;
                ptr=ptr->link;
               }
           }
        while (q!=NULL)
           {
            temp=(struct poly*)malloc(sizeof(struct poly));
            temp->coef=q->coef;
            temp->exp=q->exp;
            temp->link=NULL;
            q=q->link;
            if (rhead==NULL)
               {
                rhead=temp;
                ptr=rhead;
               }
            else
               {
                ptr->link=temp;
                ptr=ptr->link;
               }
           }
     printf("RESULTANT POLYNOMIAL\n");
     displayPoly(rhead);
   }
    
    
struct poly *createPoly()
   {
    struct poly *head=NULL,*temp,*ptr;
    int limit;
    printf("Enter the number of terms in polynomial:\n");
    scanf("%d",&limit);
    for (int i=0;i<limit;i++)
       {
        temp=(struct poly*)malloc(sizeof(struct poly));
        printf("Enter the coefficient of term%d :",i+1);
        scanf("%d",&temp->coef);
        printf("Enter the exponent of term%d    :",i+1);
        scanf("%d",&temp->exp);
        temp->link=NULL;
        if (head==NULL)
           {
            head=temp;
            ptr=head;
           }
        else
           {
            ptr->link=temp;
            ptr=ptr->link;
           }
       }
    return head;
   } 

void displayPoly(struct poly *head)
   {
    struct poly *ptr;
    ptr=head;
    if (head==NULL)
       {
        printf("Underflow\n");
       }
    else
       {          
        printf("\nThe given polynomial is,\n");
        while (ptr->link!=NULL)
           {
            printf("%dx^%d + ",ptr->coef,ptr->exp);
            ptr=ptr->link;
           }
        if (ptr->link==NULL)
           {
            printf("%dx^%d",ptr->coef,ptr->exp);
           }
        printf("\n\n");    
       }
    }
    
    
