#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
 if(n==0)
 {
  return 1;
 }
 else
 {
  return n*factorial(n-1);
 }
}
void main()
{
 int n,result;
 clrscr();
 printf("\nEnter any Number:");
 scanf("%d",&n);
 result=factorial(n);
 printf("\nFactorial of %d:",n);
 printf("%d",result);
 getch();
}
