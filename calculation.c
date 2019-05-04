#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	char ch;//='+','-','*','/';
	
	printf("Enter the operator of which operation is to be performed");
	scanf("%c",&ch);
	
	printf("Enter two nos. ");
	scanf("%d",&a);
	scanf("%d",&b);
	

	 switch(ch)
	   {
	    case '+':
			c=a+b;
			printf("their additon is: %d",c);
			break;
			
		case '-':
			c=a-b;
			printf("their subtraction is: %d",c);
			break;
			
		case '*':
			c=a*b;
			printf("their multiplication is: %d",c);
			break;
			
		case '/':
			c=a/b;
			printf("their division is: %d",c);
			break;
		
		default:printf("Wrong operator");
	}
	getch();
		
}
