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
   if(rear==n-1)
   {
    printf("\nQueue Overflow..!!");
   }
   else if(front==-1)
   {
    printf("Enter the Item:");
    scanf("%d",&item);
    front=rear=0;
    queue[rear]=item;
   }
   else
   {
    printf("Enter the Item:");
    scanf("%d",&item);
    rear++;
    queue[rear]=item;
   }
   break;
   case 2:
   if(front==-1)
   {
    printf("\nQueue is Empty..!!");
   }
   else if(front==rear)
   {
    front=rear=-1;
   }
   else
   {
   printf("\nDeleted: %d",queue[front]);
   front++;

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
    for(i=front;i<=rear;i++)
    {
     printf(" %d",queue[i]);
    }
   }
    break;
   case 5:
   exit(0);
  }
 }while(choice!=5);
 getch();
}




