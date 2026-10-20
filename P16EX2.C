#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int top,i,n;
 char str[10];
 char stack[10];
 clrscr();
 top=-1;
 printf("\nEnter the size of string:");
 scanf("%d",&n);
 printf("\nEnter any String:");
 scanf("%s",str);
 for(i=0;i<n;i++)
 {
  top++;
  stack[top]=str[i];

 }
 printf("\nOriginal String: %s",str);

 if(top==-1)
 {
 printf("\nEmpty Stack..!!");
 }
 else
 {
 printf("\nReversed String:");
 for(i=top;i>=0;i--)
 {
  printf("%c",stack[i]);
 }
 }
 getch();
}
