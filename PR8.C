#include<stdio.h>
#include<conio.h>
void main()
{
 int a[15],n,i,j,min,temp;
 clrscr();

 printf("\nEnter the size of array:");
 scanf("%d",&n);

 printf("\nEnter the Array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 printf("\nArray Before Sorted:");
 for(i=0;i<n;i++)
 {
  printf(" %d",a[i]);
 }

 for(i=0;i<n-1;i++)
 {
  min=i;
   for(j=i+1;j<n;j++)
   {
    if(a[j]<a[min])
    {
     min=j;
    }
   }
   temp=a[i];
   a[i]=a[min];
   a[min]=temp;
   printf("\n");
   printf("\nArray After %d Pass:",i+1);
   for(j=0;j<n;j++)
   {
   printf(" %d",a[j]);
   }

  }
  printf("\n");
  printf("\nArray After Sorted:");
  for(i=0;i<n;i++)
  {
   printf(" %d",a[i]);
  }
  getch();
}