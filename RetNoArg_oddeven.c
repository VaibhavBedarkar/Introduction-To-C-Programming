#include<stdio.h>
#include<conio.h>
int oddeven();

void main()
{
	int oeven;
	
	oeven=oddeven();
	printf("",oeven);
	
	getch();
}
 int oddeven()
 {
  int i,x;
  printf("enter the number");
  scanf("%d",&i);
  
  if(i%2==0)
  {     x=i;
		printf("even%d",x);
		}		
 else{
		x=i;
		printf("odd%d",x);
   }
 
 return x;
 }
