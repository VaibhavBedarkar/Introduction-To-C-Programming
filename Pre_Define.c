#include<stdio.h>
#include<conio.h>
#define a 12
#define b 4
#define pf printf
#define sf scanf
// function declare
void Add();
void Sub();
void Mult();
void Div();

void main()
{
    Add();
	Sub();
	Mult();
	Div();

	getch();	
}

// function define
void Add()
{
	int ad;
	ad = a+b;
	pf("\n There Addition is %d \n",ad);
	
	
}


void Sub()
{   int s;
    s = a-b;
	pf("\n There Subtraction is %d \n",s);
		
}


void Mult()
{
	int m;
	m = a*b;
	pf("\n There Mult is %d \n",m);
	
	
}

void Div()
{
   int d;
   d = a/b;
	pf("\n Division is %d \n",d);
	
	
}
