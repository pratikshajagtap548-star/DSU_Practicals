#include<stdio.h>
#include<conio.h>
int Fibonacci(int n)
{
 if(n==0)
 {
  return 0;
 }
 else if(n==1)
 {
  return 1;
 }
 else
 {
  return Fibonacci(n-1)+Fibonacci(n-2);
 }
}
void main()
{
 int n,result,i;
 clrscr();
 printf("\nEnter the Terms:");
 scanf("%d",&n);

 printf("\nFibonacci Series:");
 for(i=0;i<n;i++)
 {
 printf("%d",Fibonacci(i));
 }

 getch();
}

