#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
 int data;
 struct node *next;
};
void main()
{
 struct node *newnode,*head,*temp,*previous,*del;
 int ch,choice,count,i,key,flag,pos;
 clrscr();
 count=0;
 flag=0;

 printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at particular position\n4.Delete at beginning\n5.Delete at end\n6.Delete at particular position\n7.Search\n8.Counting Nodes\n9.Display");
 printf("\nEnter the Choice:");
 scanf("%d",&choice);
 head=NULL;
 if(choice>=1&& choice<=9)
 {
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
 temp=head;
 printf("\nList:");
 while(temp!=NULL)
 {
  printf(" %d",temp->data);
  count++;
  temp=temp->next;
 }
 switch(choice)
 {
  case 1:
  printf("\nInsert at beginning..!!!");
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter the data:");
  scanf("%d",&newnode->data);
  newnode->next=head;
  head=newnode;
  printf("\nUpdated List:");
  temp=head;
  while(temp!=NULL)
  {
   printf(" %d",temp->data);
   temp=temp->next;
  }
  break;
  case 2:
  printf("\nInsert at End..!!!");
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter the data:");
  scanf("%d",&newnode->data);
  newnode->next=NULL;
  temp=head;
  while(temp->next!=NULL)
  {
   temp=temp->next;
  }
  temp->next=newnode;

  printf("\nUpdated List:");
  temp=head;
  while(temp!=NULL)
  {
   printf(" %d",temp->data);
   temp=temp->next;
  }
  break;
  case 3:
  printf("\nTotal Nodes are %d",count);
  printf("\nInsert at Particular Position..!!!");
  printf("\nEnter the Position:");
  scanf("%d",&pos);
  if(pos>count)
  {
   printf("\nInvalid Position");
  }
  else
  {
  i=1;
  temp=head;
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter the data:");
  scanf("%d",&newnode->data);
  while(i<pos-1)
  {
   temp=temp->next;
   i++;
  }
  newnode->next=temp->next;
  temp->next=newnode;
  printf("\nUpdated List:");
  temp=head;
  while(temp!=NULL)
  {
   printf(" %d",temp->data);
   temp=temp->next;
  }
 }
 break;
  case 4:
  printf("\nDelete at beginning..!!");
  temp=head;
  if(head==NULL)
  {
   printf("\nEmpty List..!!");
  }
  else if(head->next==NULL)
  {
   printf("\nOnly one Node is present in List.!");
   head=NULL;
   free(temp);
  }
  else
  {
   head=head->next;
   temp=temp->next;
   free(temp);
  }
  printf("\nUpdated List:");
  temp=head;
  while(temp!=NULL)
  {
   printf(" %d",temp->data);
   temp=temp->next;
  }
  break;
  case 5:
  printf("\nDelete at End..!!");
  temp=head;
  if(head==NULL)
  {
   printf("\nEmpty List..!!");
  }
  else if(head->next==NULL)
  {
   printf("\nOnly one Node is present in List.!");
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
  }
  printf("\nUpdated List:");
  temp=head;
  while(temp!=NULL)
  {
   printf(" %d",temp->data);
   temp=temp->next;
  }
  break;
  case 6:
  printf("\nTotal Nodes are:%d",count);
  printf("\nDelete at Particular Position..!!");

  temp=head;
  if(head==NULL)
  {
   printf("\nEmpty List..!!");
  }
  else
  {
   printf("\nEnter the Position:");
   scanf("%d",&pos);
   if(pos>count)
   {
    printf("\nInvalid Position");
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
  printf("\nUpdated List:");
  temp=head;
  while(temp!=NULL)
  {
   printf(" %d",temp->data);
   temp=temp->next;

  }
  break;
 case 7:
 printf("\nSearching node from List..!!");
 printf("\nEnter the node to be Search:");
 scanf("%d",&key);
 temp=head;
 while(temp!=NULL)
 {
  if(temp->data==key)
  {
   flag++;
  }
  temp=temp->next;
 }
 if(flag==1)
 {
  printf("\nFound in List..!!");
 }
 else
 {
  printf("\nNode not Found..!!");
 }
 break;
 case 8:
 printf("\nCounting Nodes in List..!!");
 printf("\nTotal Nodes are:%d",count);
 break;

 case 9:
 printf("\nDisplaying List..!!");
 printf("\nList:");
 temp=head;
 while(temp!=NULL)
 {
  printf(" %d",temp->data);
  temp=temp->next;
 }
 break;
 }
}
else
{
 printf("\nInvalid Choice..!!");
}
getch();
}