#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],i,n;
	
	printf("Enter the values of n ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
		};
	 
	 for(i=0;i<n;i++)
	 {
		printf("value in array %d \n",a[i]);
	 }
	 
 getch();	
}
