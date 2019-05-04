#include<stdio.h>
#include<conio.h>
void main()
{
	int a[8],i,n,fact=1;
	
	printf("enter the size of array ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		};
	for (i=0;i<n;i++)
	{
		fact=fact*a[i];
		};
		
	printf("the factorial is %d",fact);
	getch();
}
