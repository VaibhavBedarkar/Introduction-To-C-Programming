#include<stdio.h>
#include<conio.h>
void main()
{
	int a[8][8],b[8][8],mult[8][8],i,j,k,m,n,p,q,sum;
	
	printf("Enter the dimension of matrix 'A' :\n");
	scanf("%d%d",&m,&n);
	
	printf("enter the elements\n");
	for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
	    scanf("%d",&a[i][j]);
	 	
	printf("Enter the dimension of matrix 'B' :\n");
	scanf("%d%d",&p,&q);
	
	printf("enter the elements\n");
	for(i=0;i<p;i++)
	  for(j=0;j<q;j++)
	    scanf("%d",&b[p][q]);
	    
	printf("dim of m and n are %d %d \n",m,n);
	printf("dim of p and q are %d %d \n",p,q);
	printf("There Multiplication ");
	if(n==p)
	{ 
		for (i = 0; i < m; i++)  
	{
      for (j = 0; j < q; j++) 
	   {
	        for (k = 0; k < p; k++) 
			{
	          sum = sum + a[i][k]*b[k][j];
	        }
	 
	        mult[i][j] = sum;
	        sum = 0;
	    }
    }
 
    printf("Product of the matrices:\n");
 
    for (i = 0; i < m; i++) 
	{
      for (j = 0; j < q; j++)
       {
	    printf("%d\t", mult[i][j]);
	   }
      printf("\n");
    }
  } 
	
	 /*	for(i=0;i<m;i++)
		 {
		   for(j=0;j<q;j++)
		   {       
			 for(k=0;k<p;k++)
		     {  sum=sum + a[i][k]*b[k][j];
		       
			}
			 mult[i][j]=sum;
		     sum=0;
		   } 
		    
		} 
				// printing of matrix
				 for(i=0;i<m;i++)
				 {
		           for(j=0;j<n;j++)
		           {
				     printf(" %d",mult[i][j]);
				   }
		         printf("\n"); 
				  }
	}*/
	
	
	else{
		printf("Does not exist!!");
	}
	
	
getch();	
}
