#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	
	LOOP:do
	    {
           if(a==10)
		   {
				a=a+1;
				goto LOOP;
				}		
		  printf("Value of a is %d",a);
		
		}while(a==20);
		
		
		getch();
	
}
