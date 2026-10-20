#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
void main()
{
 struct node *newnode,*rear,*front,*temp;
 int choice;
 clrscr();
 rear=front=NULL;
 do
 {
  printf("\n1.Insert(enqueue)\n2.Delete(dequeue)\n3.Peek\n4.Display\n5.Exit");
  printf("\nEnter the Choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   newnode=(struct node *)malloc(sizeof(struct node));
   newnode->next=NULL;
   if(front==NULL)
   {
    printf("\nEnter the Data:");
    scanf("%d",&newnode->data);
    front=rear=newnode;
    rear->next=front;
   }
   else
   {
    printf("\nEnter the Data:");
    scanf("%d",&newnode->data);
    rear->next=newnode;
    rear=newnode;
    rear->next=front;
   }
   break;

   case 2:
   if(front==NULL)
   {
    printf("\nQueue is Empty..!!");
   }
   else if(front==rear)
   {
    printf("\nDeleted: %d",front->data);
    free(front);
    front=rear=NULL;
   }
   else
   {
    printf("\nDeleted: %d",front->data);
    temp=front;
    front=front->next;
    rear->next=front;
    free(temp);
   }
   break;

   case 3:
   if(front==NULL)
   {
    printf("\nQueue is Empty..!!");
   }
   else
   {
    printf("\nTop= %d",front->data);
   }
   break;

   case 4:
   if(front==NULL)
   {
    printf("\nQueue is Empty..!!");
   }
   else
   {
    printf("\nQueue:");
    temp=front;
    while(temp!=front)
    {
     printf(" %d",temp->data);
     temp=temp->next;
    }
    printf(" %d",temp->data);
    }
   break;
   case 5:
   exit(0);
  }
 }while(choice!=5);
 getch();
}