#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n=0;
	int* ptr;
	
	printf("\n Enter the value of n :");
	scanf("%d",&n);
	printf("\n sizeof n : %d",n);
	
	ptr =(int*) malloc(n* sizeof(int));
	
	
	if(ptr==NULL)
	{
		printf("\n Memory not allocated");
	}
	else
	{
	for(i=0;i<n;i++)
    	{
	     ptr[i]=i+1;
	     printf(" \n elements are :%d",ptr[i]);	
		
	     }
	}
	free(ptr);
	getch();	
}
