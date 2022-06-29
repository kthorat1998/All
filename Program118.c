#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	char Fname[20];
	
	int fd=0;  //file descriptor
	printf("Enter the file name to create\n");
	scanf("%s",Fname);
	
	fd=creat(Fname,0777);
	if(fd==-1)
	{
		printf("unable to create the file\n");
		return -1;
	}
	else
	{
	printf("file is successfully created with fd\n%d",fd);
	}
	
	return 0;
}