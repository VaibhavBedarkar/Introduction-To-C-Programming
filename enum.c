#include<stdio.h>
#include<conio.h>
void main()
{
	enum Days{Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
	
	enum Days Today;
	Today=Thursday;
	
	printf("Thursday is the %d day",Today+1);
	
	getch();
	}
	

