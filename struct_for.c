#include<stdio.h>
#include<conio.h>
struct Students
{
	int Roll;
	char Name[100];
	float Marks;
		
};

void main()
{
	struct Students c[10];
	int len,i;
	 printf("Enter the no of student");
	 scanf("%d",&len);
	 
	 for(i=0;i<len;i++)
	 {
		printf("--------------------");
		printf("enter the roll no\n");
		scanf("%d",&c[i].Roll);
		
	    printf("enter the name\n");
		scanf("%s",&c[i].Name);
		
		printf("enter the marks\n");
		scanf("%f",&c[i].Marks);			
	    printf("--------------------");
	 }
	 for(i=0;i<len;i++)
	 {
		printf("Details are\n Roll no %d\n Name %s\n Marks %f\n",c[i].Roll,c[i].Name,c[i].Marks);
		
	 }
		
	getch();
}
