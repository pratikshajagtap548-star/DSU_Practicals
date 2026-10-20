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
 struct node *newnode,*head,*temp;
 int ch,pos,i,count,key,flag;
 clrscr();
 //count=0;
 flag=0;
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
   temp=newnode;
  }

  printf("\nAdd new Node press 1 else 0:");
  scanf("%d",&ch);
 }while(ch==1);

 temp=head;
 printf("\nList:");
 while(temp!=NULL)
 {
  printf(" %d",temp->data);
  //count++;
  temp=temp->next;
 }

 //printf("\nTotal no. of nodes:%d",count);

 /* printf("\nInsert at beginning..!!");
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("\nEnter the data:");
 scanf("%d",&newnode->data);
 newnode->next=head;
 head=newnode;
 */
 /*
 printf("\nInsert at End");
 newnode=(struct node *)malloc(sizeof(struct node));
 printf("\nEnter the data:");
 scanf("%d",&newnode->data);

 temp=head;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }

 temp->next=newnode;
 newnode->next=NULL;
 */

/* printf("\nInsert at particular ");
 printf("\nEnter the position:");
 scanf("%d",&pos);

 if(pos>count)
 {
  printf("\nInvalid position:");
 }
 else
 {
  i=1;
  newnode=(struct node *)malloc(sizeof(struct node));
  printf("\nEnter the data:");
  scanf("%d",&newnode->data);
  temp=head;
  while(i<pos-1)
  {
    temp=temp->next;
    i++;
  }
  newnode->next=temp->next;
  temp->next=newnode;
 }
 */
 printf("\nEnter the key Node:");
 scanf("%d",&key);

 temp=head;
 while(temp!=NULL)
 {
 if(temp->data==key)
 {
  printf("\nFound in list..!!");
  flag++;
 }
 temp=temp->next;
}
if(flag==0)
{
 printf("\nNot Found..!!");
}
 /*printf("\nList After Insertion:");
 while(temp!=NULL)
 {
  printf(" %d",temp->data);
  temp=temp->next;
 }
*/
 getch();
}