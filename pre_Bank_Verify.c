//--------------------------Verify Function--------------------------------//
void Verify()
{
	FILE *Create;
	char Ac[10];
	char Pass[10];
	
	char Ac_no[10];
	char Pass_wd[10];

	printf("\nWelcome to User-Login menu\n");
	
	printf("\n Enter the Account No\n");
	scanf("%s",&Ac);
	
	printf("\n Enter Password\n");
	scanf("%s",&Pass);
	

	Create = fopen("Ac_no.txt","r");
	

	
	if(Create==NULL)
	{
		printf("Database missing!!");
		
		}
	else{
		while(fgets(Ac_no,10,Create))
	{
		}
	
	    }
	int a = strcmp(Ac_no,Ac);
	
	
	
	
	
	
	if(Create==0)
	{
	   printf("User Database Missing");
	   	
	}
	 else{
			if(a==0)
			{
				printf("Account details Matched Successfully!!");
			}
			else
			{
			    printf("Account details Not Found!!");	
			}
	 }
	
	
	fclose(Create);
	
	//-------------------------------------------------------------------
	
	FILE *Password;
	
	Password = fopen("Password.txt","r");
	
	
	
	if(Password==NULL)
	{
		printf("Database missing!!");
		
		}
	else{
		while(fgets(Pass_wd,10,Password))
	    {
		
		}
	
	    }
	    	int p = strcmp(Pass_wd,Pass);
	if(Password==0)
	{
	   printf("Password Database Missing");
	   	
	}
	 else{
			if(p==0)
			{
				printf("Password Matched Successfully!!");
			}
			else
			{
			    printf("Password Invalid!!");	
			}
	 }
	
	
	fclose(Password);
	
	
getch();	
};
