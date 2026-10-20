#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],n,i,j,temp,low,high,mid,flag,key;
 flag=0;
 clrscr();

 printf("\nEnter the size of array:");
 scanf("%d",&n);

 printf("\nEnter the array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 printf("\nArray elements Before Sorted:");
 for(i=0;i<n;i++)
 {
  printf(" %d",a[i]);
 }

 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 printf("\n");
 printf("\nArray elements After Sorted:");
 for(i=0;i<n;i++)
 {
  printf(" %d",a[i]);
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