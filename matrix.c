#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],m,n,i,j;
	
	printf("enter the dimension of matrix");
	scanf("%d%d",&m,&n);

	printf("enter the values in matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
    
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t values are %d",a[i][j]);
			
			}
		printf("\n ");
    }
getch();	
}
