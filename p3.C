#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char ary[10][10],key[10];
 int n,i,flag;
 flag=0;
 clrscr();

 printf("\nEnter the size of array:");
 scanf("%d",&n);

 printf("\nEnter the string:\n");
 for(i=0;i<n;i++)
 {
  scanf("%s",&ary[i]);
 }

 printf("String are:\n");
 for(i=0;i<n;i++)
 {
  printf("%s",ary[i]);
  printf("\n");
 }

 printf("\nEnter the key string:");
 scanf("%s",&key);

  for(i=0;i<n;i++)
  {
   if(strcmp(ary[i],key)==0)
   {
    printf("\Name is found at %d position",i+1);
    flag++;

   }

  }

  if(flag==0)
  {
   printf("\nString is not found:");
  }
 getch();
}