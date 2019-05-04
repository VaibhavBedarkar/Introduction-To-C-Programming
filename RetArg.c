#include<stdio.h>
#include<conio.h>
 float Smallnos(float,float); //dec
 
 void main()
 {
	float a,b,res;
	printf("enter no first ");
	scanf("%f",&a);
	
	printf("enter 2 no");
	scanf("%f",&b);
	
	res=Smallnos(a,b);//calling

	printf("The Smaller no is %f",res);
		
		
  getch();		
 }
 
 float Smallnos(float m,float n) //definition
 {
	if(m<n)
	 {
			return m;
	 }	
    else
	{
	
	        return n;
    }	
	return ;	
 }
