#include<stdio.h>
main()
{
	char *p;
	char data[1000];
	p = fopen("filehandling.txt","w");
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		printf("Enter your String = ");
		gets(data);
		fputs(data,p);
		printf("Data add sucessfull.....");
	}
	fclose(p);
}