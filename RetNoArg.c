#include<stdio.h>
#include<conio.h>
int smallnos();
void main()
{
  int small;
  
  small=smallnos();
  printf("smallest no is %d",small);
  
  getch();

}
 int smallnos()
 { 
    int i,j,smallno;
    printf("enter the 2 no");
    scanf("%d%d",&i,&j);
		if(i<j)
		{
			smallno=i;			
		}
		else
		{
			smallno=j;
		}
		
	return smallno;	
 } 
