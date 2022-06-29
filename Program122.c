#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	char Fname[20];
	char data[100];
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
	printf("file is successfully opened with fd\n%d",fd);
	
	printf("enter the data that you want to write\n");
	scanf(" %[^'\n']s",data);
	
	iRet=write(fd,data,strlen(data));
	
	printf("%d bytes gets successfully written in file\n",iRet);
	
	return 0;
}