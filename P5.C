#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[10][20],key[10];
 int n,i,high,low,mid,flag;
 flag=0;
 clrscr();

 printf("\nEnter the size of array:");
 scanf("%d",&n);

 printf("\nEnter the Strings/Names:");
 for(i=0;i<n;i++)
 {
  scanf("%s",&a[i]);
 }

 printf("\nStrings/Names are:");
 for(i=0;i<n;i++)
 {
  printf("%s",a[i]);
  printf("\t");
 }

 printf("\n\nEnter the String/Name to Search:");
 scanf("%s",&key);

 low=0;
 high=n-1;

 while(low<=high)

 {
   mid=(low+high)/2;

   if(strcmp(a[mid],key)==0)
   {
    printf("\nString/Name found at %d Position",mid+1);
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
   printf("\nString/Name not found");
  }
 getch();
}