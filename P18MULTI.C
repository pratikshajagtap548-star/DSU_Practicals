#include<stdio.h>
#include<conio.h>
int multi(int a,int b)
{
 if(b==0)
 {
  return 0;
 }
 else
 {
  return a+multi(a,b-1);
 }
}
void main()
{
 int a,b,result;
 clrscr();
 printf("\nEnter any Two Number:");
 scanf("%d%d",&a,&b);
 result=multi(a,b);
 printf("\nMultiplication of %d and %d:",a,b);
 printf("%d",result);
 getch();
}