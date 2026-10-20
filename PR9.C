#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20][20],temp[20];
 int i,j,n,min;
 clrscr();

 printf("\nEnter the Size of Array:");
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
  min=i;
  for(j=i+1;j<n;j++)
  {
   if(strcmp(a[j],a[min])<0)
   {
    min=j;
   }
  }
   strcpy(temp,a[i]);
   strcpy(a[j],a[j+1]);
   strcpy(a[j+1],temp);

   printf("\n");
   printf("\nNames/Strings %d Pass:",i+1);
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
