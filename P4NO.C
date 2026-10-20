#include<stdio.h>
#include<conio.h>

void main()
{
 int a[10],n,i,high,low,mid,key,flag;
 flag=0;
 clrscr();

 printf("\nEnter the size of array:");
 scanf("%d",&n);

 printf("\nEnter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 printf("\nArray Elements are:");
 for(i=0;i<n;i++)
 {
  printf("%d",a[i]);
  printf("\t");
 }

 printf("\n\nEnter the element to Search:");
 scanf("%d",&key);

 low=0;
 high=n-1;

 while(low<=high)

 {
   mid=(low+high)/2;

   if(a[mid]==key)
   {
    printf("\nElement found at %d Position",mid+1);
    flag++;
    break;
   }
   else if(key>a[mid])
   {
    low=mid+1;
   }
   else
   {
    high=mid-1;
   }
  }

  if(flag==0)
  {
   printf("\nElement not found");
  }
 getch();
}

