#include<stdio.h>
#include<conio.h>
struct Car
{
	int no;
	char color[10];
	float mil;
};

main()
{

  struct Car c;
  
  printf("Enter the no. of car");
  scanf("%d",&c.no);

  printf("Enter the color of car");
  scanf("%s",&c.color);
    
  printf("Enter the Mileage of car");
  scanf("%f",&c.mil);	
	
	printf("Number of car is %d \nColor of car is %s  \nMilegae of car is %f",c.no,c.color,c.mil);
	getch();
}
