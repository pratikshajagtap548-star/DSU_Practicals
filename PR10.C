#include<stdio.h>
#include<conio.h>

void main()
{
 char a[20];
 int n,i,j,temp;
 clrscr();

 printf("\nEnter the size of array:");
 scanf("%d",&n);

 printf("\nEnter the Array Elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 printf("\nArray Before Sorted:");
 for(i=0;i<n;i++)
 {
  printf(" %d",a[i]);
 }

 for(i=1;i<n;i++)
 {
  temp=a[i];
  j=i-1;
  while(j>=0 && a[j]>temp)
  {
   a[j+1]=a[j];
   j--;
  }
 a[j+1]=temp;
 printf("\nAfter %d Pass:",i);
  for(j=0;j<n;j++)
  {
  printf(" %d",a[j]);
 }
 }

 printf("\nArray After Sorted:");
 for(i=0;i<n;i++)
 {
  printf(" %d",a[i]);
 }

 getch();
}
