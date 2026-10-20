#include<stdio.h>
#include<conio.h>
void main()
{
 int queue[20],item,rear,front,n,i,choice;
 clrscr();
 rear=front=-1;
 printf("\nEnter the Size of Queue:");
 scanf("%d",&n);
 do
 {
  printf("\n1.Insert(enqueue)\n2.Delete(dequeue)\n3.Peek\n4.Display\n5.Exit");
  printf("\nEnter the Choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   if((rear+1)%n==front)
   {
    printf("\nQueue is Full/Overflow..!!");
   }
   else if(front==-1)
   {
    front=rear=0;
    printf("\nEnter the Item:");
    scanf("%d",&item);
    queue[rear]=item;
   }
   else
   {
    rear=(rear+1)%n;
    printf("\nEnter the item:");
    scanf("%d",&item);
    queue[rear]=item;
   }
   break;

   case 2:
   if(front==-1)
   {
    printf("\nQueue is Empty/Underflow..!!");
   }
   else if(front==rear)
   {
    printf("\nDeleted: %d",queue[front]);
    front=rear=-1;
   }
   else
   {
    printf("\nDeleted: %d",queue[front]);
    front=(front+1)%n;
   }
   break;

   case 3:
   if(front==-1)
   {
    printf("\nQueue is Empty..!!");
   }
   else
   {
    printf("\nTop= %d",queue[front]);
   }
   break;

   case 4:
   if(front==-1)
   {

    printf("\nQueue is Empty..!!");
   }
   else
   {
    printf("\nQueue:");
    for(i=front;;i=(i+1)%n)
    {
     printf(" %d",queue[i]);
     if(i==rear)
     break;
    }

   }
   break;

   case 5:
   exit(0);
  }
 }while(choice!=5);
 getch();
}