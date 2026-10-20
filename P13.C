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
 struct node *newnode,*temp,*head;
 char ch;
 clrscr();

 head=NULL;
 do
 {
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter the data:");
  scanf("%d",&newnode->data);
  newnode->next=NULL;

  if(head==NULL)
  {
   temp=head=newnode;
  }
  else
  {
   temp->next=newnode;
   temp=newnode;
  }
  printf("\nAdd new node press 1 else 0:");
  scanf("%d",&ch);
 }while(ch==1);


 printf("\nList:");
 temp=head;
 while(temp!=NULL)
 {
  printf(" %d",temp->data);
  temp=temp->next;
 }

 /*print("\nDelete at beginning..!!");

 temp=head;
 if(head==NULL)
 {
  printf("\nEmpty List:");
 }
 else if(head->next==NULL)
 {
  head=NUL*/
 getch();
}

