#include<stdio.h>
#include<conio.h>
void main()
{
	int a[8],n,i,sum=0;
	
	printf("Enter the size of array");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}
    for(i=0;i<n;i++)
    {
		sum=sum+a[i];
		}
    printf("the sum is %d",sum);
getch();
}

