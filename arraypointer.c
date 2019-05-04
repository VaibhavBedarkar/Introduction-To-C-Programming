#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],a,i,sum=0;
	int *ptr;
	 
	 printf("enter the no of values \n");
	 scanf("%d",&a);
	 
	 for(i=0;i<a;i++)
	 scanf("%d",&arr[i]);
// enter the value	 
	 
  for(i=0;i<a;i++)
  {
	printf("%d",arr[i]);
		
  }
    ptr =arr;
// addition
   
   for(i=0;i<a;i++)
   {
	sum = sum + *ptr;	
	ptr++;	
   }
  printf("\n addition is%d",sum);

	  
  getch();
}
