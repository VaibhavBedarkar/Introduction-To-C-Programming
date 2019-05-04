void User_Cre()
{
	FILE *Create;

	char Ac_no[10];
	char Pass_wd[10];
	
	
	int counter_a;
	int counter_p;
	printf("\nWelcome to Create user menu\n");
	
	printf("\nCreate the Account No\n");
	scanf("%s",&Ac_no);
	
	printf("\nCreate Password\n");
	scanf("%s",&Pass_wd);
	
	int A_len=strlen(Ac_no);
	int P_len=strlen(Pass_wd);
	// User Id creation process starts from here
	Create = fopen("Ac_no.txt","w");
	
	if(Create==0)
     	{
           printf("Account Database Missing\n");		
		
		}
	
	else
	    {
			for(counter_a=0;counter_a<A_len;counter_a++)
			{
			   fputc(Ac_no[counter_a],Create);
			   				
			}
		    printf("\nYour A/c no is %s \n",Ac_no);
		    printf("\nUser Created Successfully!!!\n");
		}
	fclose(Create);
	
	//user id creation ends here and password crreation starts
	FILE *Password;
	
	Password = fopen("Password.txt","w");
	
	if(Password==0)
	{
	   printf("Password Database Missing");
	   	
	}
    else
    {
		for(counter_p=0;counter_p<P_len;counter_p++)
		{
		   fputc(Pass_wd[counter_p],Password);	
			
		}
		printf("\nYour Password is %s \n",Pass_wd);
		printf("\nPassword Created Successfully!!! \n");
	}

   fclose(Password);
   
   getch();

}






