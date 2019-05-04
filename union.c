#include<stdio.h>
#include<conio.h>

union Student
{
	int RollNo;
	char Name[100];
	float Percentage;
	
};

main()
{
	union Student s;
	
	printf("\nEnter the name of student\n");
	scanf("%s",&s.Name);
	printf("%s \n",s.Name);
	
	printf("Enter the Roll no");
	scanf("%d",&s.RollNo);
	printf("%d \n",s.RollNo);
	
	printf("Enter the Percentage");
	scanf("%f",&s.Percentage);
	printf("%f \n",s.Percentage);
	
	getch();
	
	
}
