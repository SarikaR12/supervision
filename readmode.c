#include<stdio.h>
main()
{
	char *p;
	char data[1000];
	p = fopen("filehandling.txt","r");
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		while(fgets(data,5,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}