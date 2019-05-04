#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=0;
	int *ptr;
	
	printf("Enter the size of n:");
	scanf("%d",&n);
	printf("Size of n :%d",n);
	
	ptr =(int*) calloc(n,sizeof(int));
	
	if(ptr==NULL)
	{
	   printf("Memory not allocated");
	   	
	}
	else
	{
		for(i=0;i<n;i++)
		{
			ptr[i]=i+1;
			printf("\n element are %d",ptr[i]);
			
		}
		
	}
	free(ptr);
	getch();
}
