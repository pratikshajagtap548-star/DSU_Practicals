#include<stdio.h>
#include<conio.h>
int sum(int n)
{
 if(n==0)
 {
  return 0;
 }
 else
 {
  return n+sum(n-1);
 }
}
void main()
{
 int n,result;
 clrscr();
 printf("\nEnter any Number:");
 scanf("%d",&n);
 result=sum(n);
 printf("\nSum of %d:",n);
 printf("%d",result);
 getch();
}