#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	
	printf("Choose where you want to travel from choice:\n");
	printf("Towards Mumbai(M)\n");
	printf("Towards Pune (P)\n");
	printf("Towards Bhusawal(B)\n");
	printf("Towards Delhi (D)\n\n");
	printf("Enter your choice %c \t");
	scanf("%c",&ch);
	
	switch(ch)
	{ 
		case 'M':
		    printf("Go to platform no. 1");
		    break;
	    
	    case 'P':
			printf("Go to platform no. 3");
		    break;
		
		case 'B':
			printf("Go to platform no. 2");
			break;
		case 'D':
			printf("Go to platform no. 4");
			break;
		default:
			printf("Wrong choice !!!");
	}
getch();	
}
