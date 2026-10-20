#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],key,n,i,flag=0;

 printf("\nEnter the size of array:");
 scanf("%d",&n);

 printf("\nEnter the array elements:");
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }

 printf("\nArray elememts are:");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
 }

 printf("\nEnter the key element:");
 scanf("%d",&key);

 for(i=0;i<n;i++)
 {
  if(a[i]==key)
  {
   printf("\nFound at %d position",i+1);
   flag++;
   printf("\nElement found");
  }
 }

 if(flag==0)
 {
  printf("\nElement not Found");
 }

 getch();
}