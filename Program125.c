#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	char data[10];
	int iRet=0;
	
	int fd=0;  //file descriptor
	printf("Enter the file name to open\n");
	scanf("%s",Fname);
	
	
	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("unable to open the file\n");
		return -1;
	}
	printf("file is successfully opened with fd%d\n",fd);
	
	while((iRet=read(fd,data,sizeof(data)))!=0)
	{
		write(1,data,iRet);
	}
	
	close(fd);
	return 0;
}