#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],n,i,choice,key,position,item,flag=0;
 clrscr();
 printf("\nEnter the array size:");
 scanf("%d",&n);

 printf("\nEnter array elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 do
 {
  printf("\n1.Search\n2.Insert\n3.Delete\n4.Travel\n5.Display\n");
  printf("\nEnter choice:");
  switch(choice)
  {
      case 1:
      printf("\nEnter the key element:");
      scanf("%d",&key);
      for(i=0;i<n;i++)
      {
	  if(key==a[i])
	  {
	     printf("\nFound at position %d",i+1);
	     flag++;
	  }break;
       }
       if(flag==0)
       {
	printf("\nElement not Found");
       }
       break;

       case 2:
       printf("\nEnter position to insert element:");
       scanf("%d",&position);
       printf("\nEnter the element to be insert:");
       scanf("%d",&item);
       for(i=n-1;i>=position-1;i--)
       {
	a[i+1]=a[i];
       }
       a[position-1]=item;
       n++;
       printf("\nArray elements after insertion:");
       for(i=0;i<n;i++)
       {
	printf("%d",a[i]);
       }
       break;

       case 3:
       printf("\nEnter position of element to be delete:");
       scanf("%d",&position);
       for(i=position-1;i<n;i++)
       {
	a[i]=a[i+1];
       }
       n--;
       printf("\nArray element after deletion:");
       for(i=0;i<n;i++)
       {
	printf("%d ",a[i]);
       }
       break;

       case 4:
       printf("\nArray elements are:");
       for(i=0;i<n;i++)
       {
	printf("%d ",a[i]);
       }
       break;

       case 5:
       printf("\nArray elements are:");
       for(i=0;i<n;i++)
       {
	printf("%d ",a[i]);
       }
       break;
       default:
       printf("\nInvalid choice");
       }
     }while(choice!=6);
   getch();
}