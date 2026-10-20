#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 int top,i,n;
 char str[10],stack[10],rev[10];
 clrscr();
 top=-1;
 printf("\nEnter the size of string:");
 scanf("%d",&n);
 printf("\nEnter any String:");
 scanf("%s",&str);
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
  rev[top-i]=stack[i];
  printf("%c",stack[i]);
 }
 rev[top+1]='\0';
 }
 if(strcmp(str,rev)==0)
 {
  printf("\nString is palindrome..!!");
 }
 else
 {
  printf("\nString is not Palindrome..!!");
 }
 getch();
}
