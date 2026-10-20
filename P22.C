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
 struct node *newnode,*temp,*front,*rear;
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
    printf("Enter the Data:");
    scanf("%d",&newnode->data);
   if(front==NULL&&rear==NULL)
   {
    front=rear=newnode;
   }
   else
   {
    rear->next=newnode;
    rear=newnode;
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
    front=rear=NULL;
   }
   else
   {
    printf("\nDeleted: %d",front->data);
    front=front->next;
   }
   break;
   case 3:
   if(front==NULL)
   {
    printf("\nQueue is Empty");
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
    temp=front;
    printf("\nQueue:");
    while(temp!=rear)
    {
     printf(" %d",temp->data);
     temp=temp->next;
    }
    printf("%d",temp->data);
   }
    break;
   case 5:
   exit(0);
  }
 }while(choice!=5);
 getch();
}