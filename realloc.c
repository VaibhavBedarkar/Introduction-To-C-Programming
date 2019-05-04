#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n=0;
	int *ptr;
	int *ptr1;
	printf("\n Enter the value of n: ");
	scanf("%d",&n);
	printf("Size of n :%d",n);
	
	ptr = (int *)malloc(n * sizeof(int));
	
	ptr1=(int *)realloc(ptr,sizeof(int) *n);
	
	if(ptr1==NULL)
	{
	  printf("\n Memory not assigned");		
	}
	else
	{
	  for(i=0;i<n;i++)
	  {
		ptr1[i]=i+1;
		printf(" \n Elements are :%d",ptr1[i]);			
	  }	
	
	getch();	
	}
  free(ptr);
  free(ptr1);
}
