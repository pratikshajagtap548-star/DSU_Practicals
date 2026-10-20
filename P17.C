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
 struct node *temp,*newnode,*top;
 int ch,choice;
 clrscr();
 top=NULL;
 do
 {
 printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit");
 printf("\nEnter the Choice:");
 scanf("%d",&choice);

 switch(choice)
 {
 case 1:

  newnode=(struct node*)malloc (sizeof(struct node));
  printf("\nEnter the data:");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  if(top==NULL)
  {
   top=newnode;
  }
  else
  {
   newnode->next=top;
   top=newnode;
  }

 break;
 case 2:
 if(top==NULL)
 {
  printf("\nStack Underflow!");
 }
 else
 {
  temp=top;
  printf("\nPopped from Stack=%d",top->data);
  top=top->next;
  free(temp);
 }
 break;
 case 3:
 temp=top;
 if(top==NULL)
 {
 printf("Empty stack");
 }
 else
 {
 printf("\nElements in Stack are:");
 while(temp!=NULL)
 {
  printf(" %d",temp->data);
  temp=temp->next;
 }
 }
 break;
 case 4:
 if(top==NULL)
 {
 printf("Empty stack");
 }
 else
 {
 printf("\nTop:%d",top->data);
 }
 break;
 default:
 exit(0);
 }
 }while(choice!=5);
 getch();
}

