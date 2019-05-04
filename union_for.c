#include<stdio.h>
#include<conio.h>
union student
{  
   int RollNo;
   char Name[100];
   float Marks;	
};

void main()
{
	union student v[10];
	int len,i;
	int m1,m2,m3;
	
	printf("Enter the no. of students ");
	scanf("%d",&len);
	
	for(i=0;i<len;i++)
	{
		printf("\n--------------------\n");
		printf("\nEnter the Roll no ");
		scanf("%d",&v[i].RollNo);
		printf("\nRoll no %d",v[i].RollNo);
		
		printf("\nEnter the Name  ");
		scanf("%s",&v[i].Name);
		printf("\nName %s",v[i].Name);
		
		printf("\nEnter the Marks  ");
		scanf("%f",&v[i].Marks);
		printf("\nMarks %f",v[i].Marks);
		
		
		
	}
      


getch();	
}
