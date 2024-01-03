#include<stdio.h>

main()
{
	int *p;
	char data[1000];
	p = fopen("filehandling.txt","a");
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		printf("Enter Your String =");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data add Successfuly....");
	}
	fclose(p);
	
	printf("\n--------Data Read--------\n");
	p = fopen("filehandling.txt","r");
	if(p==0)
	{
		printf("File not open");
	}
	else
		{
		printf("file open successfuly....");
//		fgets(data,buffer_size,pointer)
		while(fgets(data,5,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}