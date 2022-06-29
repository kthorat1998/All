#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	char Fname[20];
	
	
	int fd=0;  //file descriptor
	printf("Enter the file name to open\n");
	scanf("%s",Fname);
	
	
	fd=open(Fname,O_RDONLY);
	if(fd==-1)
	{
		printf("unable to open the file\n");
		return -1;
	}
	else
	{
	printf("file is successfully opened with fd\n%d",fd);
	}
	
	
	
	return 0;
}//TYPE filename