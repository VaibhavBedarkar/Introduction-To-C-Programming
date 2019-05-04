#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,l,m,n,o,p,q,r;
	
	printf("enter the dim of matrix 1");
	scanf("%d%d",&m,&n);
	 
	printf("enter the dim of matrix 2");
	scanf("%d%d",&o,&p);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
	    {
		  scanf("%d%d",&a[i][j]);	
		}
	}
	
	
	for(k=0;k<o;k++)
	{
		for(l=0;l<p;l++)
		{
		  scanf("%d%d",&b[k][l]);
		}
	}
  

  for(q=0;q<m;q++)
  {
		for(r=0;r<n;r++)
		{
            c[q][r]=a[i][j]+b[k][l];
			printf("values are",c[q][r]);
	}
  }printf("\n");
getch();
}
