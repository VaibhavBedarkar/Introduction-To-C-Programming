#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	char op;
	
	printf("Perform operation \n");
	scanf("%f%c%f",&a,&op,&b);
	
	switch(op)
	{  case '+':
		c=a+b;
		printf("addition is %f",c);
		break;
		
	   case '-':
		c=a-b;
		printf("subtraction is %f",c);
		break;
		
	   case '*':
		c=a*b;
		printf("multiplication is %f",c);
		break;
		
	   case '/':
		c=a/b;
		printf("division is %f",c);
		break;
		
	  default:
		printf("wrong choice!!!");
	}
getch();	
}
