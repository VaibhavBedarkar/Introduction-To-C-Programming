#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{   int len,c;
	char s[10],a[10],b[10],x[10],y[10],f[8],e[8];
	
	// strlen and gets function
	printf("Enter the string whose length is to be fould\n");
	gets(s);
	
	len=strlen(s);
	printf("the length of string is %d\n",len);
	// reverse the string
	
	printf("Enter the string to be reversed\n ");
	gets(s);
	strrev(s);
	printf("Reversed string is %s\n",s);
	//stirng copy
	
	printf("Enter the string to be copied\n");
	gets(s);
	
	strcpy(b,s);
	printf("String copied to 'b'%s\n",b);
	
	//string compare
	printf("Enter the first string to be compared\n");
	gets(x);
	printf("Enter the second string to be compared\n");
	gets(y);
	
	c=strcmp(x,y);
	
	if(c==0)
	{
		printf("String %s and %s are equal\n",x,y);
	}
	  else if(c<0)
	  {
	     printf("string %s is greater than %s\n",x,y);
		 
	  }
	
	   else 
	   {
			printf("string %s is smaller than %s\n",x,y);
			
		}	
	
	//Concationation of strings
	printf("Enter first string\n");
	gets(f);
	printf("Enter second string\n");
	gets(e);
	
	strcat(f,e);
	printf("After concat operation%s\n",f);
	getch();
	
	
}
