#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[10][20],temp[15];
 int n,i,j;
 clrscr();

 printf("\nEnter the size of array:");
 scanf("%d",&n);

 printf("\nEnter the Strings/Names:");
 for(i=0;i<n;i++)
 {
  scanf("%s",&a[i]);
 }

 printf("\nNames/Strings Before Sorted:");
 for(i=0;i<n;i++)
 {
  printf(" %s",a[i]);
 }

 for(i=1;i<n;i++)
 {
  strcpy(temp,a[i]);
  j=i-1;
  while(j>=0 && strcmp(a[j],temp)>0)
  {
   strcpy(a[j+1],a[j]);
   j--;
  }
 strcpy(a[j+1],temp);
 printf("\nAfter %d Pass:",i);
  for(j=0;j<n;j++)
  {
  printf(" %s",a[j]);
 }
 }

 printf("\nStrings/Names After Sorted:");
 for(i=0;i<n;i++)
 {
  printf(" %s",a[i]);
 }

 getch();
}
