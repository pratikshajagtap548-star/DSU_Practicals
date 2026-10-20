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
 struct node *data,*newnode,*temp,*head,*previous,*del;
 int ch,count,i,pos;
 clrscr();
 count=0;
 head=NULL;
 do
 {
  newnode=(struct node *)malloc(sizeof(struct node));

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
   temp=temp->next;
  }
 printf("\nAdd new node press 1 else 0:");
 scanf("%d",&ch);
 }while(ch==1);

 temp=head;
 printf("\nList:");
 while(temp!=NULL)
 {
  printf(" %d",temp->data);
  count++;
  temp=temp->next;
 }
 printf("\nTotal number of Nodes are:%d",count);
 /*printf("\nDelete at beginning..!!");
 temp=head;
 if(head==NULL)
 {
 printf("\nEmpty List..!!");
 }
 else if(head->next==NULL)
 {
  printf("\nOnly one node is present");
  head=NULL;
  free(temp);
 }
 else
 {
  head=head->next;
  temp=temp->next;
  free(temp);
 }*/

 /*printf("\nDelte at End..!!");
 temp=head;
 if(head==NULL)
 {
 printf("\nEmpty List..!!");
 }
 else if(head->next==NULL)
 {
  printf("\nOnly one node is present");
  head=NULL;
  free(temp);
 }
 else
 {

  while(temp->next!=NULL)
  {
   previous=temp;
   temp=temp->next;
  }
  free(temp);
  previous->next=NULL;
 }*/


 printf("\nDelte at Particular Position..!!");
 temp=head;
 if(head==NULL)
 {
 printf("\nEmpty List..!!");
 }
 else
 {
 printf("\nEnter the position:");
 scanf("%d",&pos);
 if(pos>count)
 {
  printf("\nInvalid position..!!");
 }
 else if(pos==1)
 {
  head=temp->next;
  free(temp);
 }
 else
 {
  i=1;
  while(i<pos-1)
  {
   temp=temp->next;
   i++;
  }
  del=temp->next;
  temp->next=del->next;
  free(del);
 }
}
 temp=head;
 printf("\nUpdated List:");
 while(temp!=NULL)
 {
  printf(" %d",temp->data);
  temp=temp->next;
 }

 getch();
}