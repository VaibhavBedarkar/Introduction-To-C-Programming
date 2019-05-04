#include<stdio.h>
#include<conio.h>
void calc(int *p1 ,int *p2 ,int d);

void  main()
{
	int a,b,c;
	printf("enter the first no");
	scanf("%d",&a);
	
	printf("enter the second no ");
	scanf("%d",&b);
	
	calc(&a,&b,&c);	
	getch();
	
}

void calc(int *p1,int *p2,int d)
{
   d=*p1+*p2;
   printf("addition is %d",d);	
}
