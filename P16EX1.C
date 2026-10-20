#include<stdio.h>
#include<conio.h>
void main()
{
 int top,item,n,choice,stack[20],i;
 clrscr();
 printf("\nEnter the Size of stack:");
 scanf("%d",&n);
 top=-1;

 printf("\n1.Push\n2.Pop\n3.Peak\n4.Display\n5.Exit");
 /*printf("\nEnter the choice 1/0:");
 scanf("%d",&choice);*/

 do
 {
 printf("\nEnter the choice:");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 if(top==n-1)
 {
 printf("\nStack Overflow..!!");
 }
 else
 {
  printf("\nEnter the the item:");
  scanf("%d",&item);
  top++;
  stack[top]=item;
 }
 break;
 case 2:
 if(top==-1)
 {
  printf("\nStack Underflow..!!");
 }
 else
 {
  printf(" %d",stack[top]);
  top--;
 }
 break;
 case 3:
 if(top==-1)
 {
  printf("\nEmpty Stack..!!");
 }
 else
 {
  printf("%d at Top position..!!",stack[top]);
 }
 break;
 case 4:

 if(top==-1)
 {
 printf("\nEmpty Stack..!!");
 }
 else
 {
 printf("\nStack:");
 for(i=top;i>=0;i--)
 {
  printf(" %d",stack[i]);
 }
 }
 break;
 default:
 exit(0);
 }
}while(choice!=5);
getch();
}