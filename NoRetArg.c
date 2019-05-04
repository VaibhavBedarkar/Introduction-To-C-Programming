#include<stdio.h>
#include<conio.h>
 void smallno(int ,int);
 
 void main()
 {
	int x,y,z,w;
	printf("enter the no");
	scanf("%d%d",&x,&y);
	smallno(x,y);
	
	getch();	
}

smallno(int z,int w)
{
	if(z<w)
	{
	  printf("the smaller no is%d",z);	
	}
	else{
		
		printf("the smaller no is%d",w);
	}	
}
