#include<conio.h>
#include<stdio.h>
void main()
{  int a,b,c;
   int *p1,*p2;
   
  
   printf("enter the value of a");
   scanf("%d",&a);
   p1=&a;
   
   
   printf("enter the value of b");
   scanf("%d",&b);
   p2=&b;
   
   
   c=*p1+*p2;
   
   printf("addition is %d",c);
   getch();
	
	
	
}
