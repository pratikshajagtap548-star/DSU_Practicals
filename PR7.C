#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[10][20],temp[2];
 int n,i,j;
 clrscr();

 printf("\nEnter the size of array:");
 scanf("%d",&n);

 printf("\nEnter the Strings/Names:");
 for(i=0;i<n;i++)
 {
  scanf("%s",&a[i]);
 }

 printf("\nStrings/Names Before Sorted:");
 for(i=0;i<n;i++)
 {
  printf(" %s",a[i]);
 }

 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-1;j++)
  {
   if(strcmp(a[j],a[j+1])>0)
   {
    strcpy(temp,a[j]);
    strcpy(a[j],a[j+1]);
    strcpy(a[j+1],temp);
   }
  }
 }
 printf("\n");
 printf("\nArray elements After Sorted:");
 for(i=0;i<n;i++)
 {
  printf(" %s",a[i]);
 }

 getch();
}