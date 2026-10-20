#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int pr;
 int data;
 struct node *next;
};
void main()
{
 struct node *front,*rear,*temp,*newnode;
 int choice;
 clrscr();
 front=rear=NULL;
 do
 {
  printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
  printf("\nEnter the Choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   newnode=(struct node *)malloc(sizeof(struct node));
   printf("Enter the Priority:");
   scanf("%d",&newnode->pr);
   printf("Enter the Data:");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
   if(front==NULL && rear==NULL)
   {
    front=rear=newnode;
   }
   else if(newnode->pr<front->pr)
   {
    newnode->next=front;
    front=newnode;
   }
   else
   {
    temp=front;
    while(temp->next!=NULL && temp->next->pr<=newnode->pr)
    {
     temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

   }
   break;
    case 2:
    if(front==NULL)
    {
     printf("\nQueue is Empty/Underflow..!!");
    }
    else
    {
     temp=front;
     printf("\nDeleted:%d",front->data);
     front=front->next;
     free(temp);
    }
    break;

     case 3:
     if(front==NULL)
     {
      printf("\nQueue is Empty/Underflow..!!");
     }
     else
     {
      temp=front;
      while(temp!=NULL)
      {
       printf("%d:%d ",temp->pr,temp->data);
       temp=temp->next;
      }
     }
     break;
     default:
     exit(0);
    }
   }while(choice!=4);
  getch();
}
