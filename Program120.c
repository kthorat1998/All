#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	char Fname[20];
	char data[100];
	
	int fd=0;  //file descriptor
	printf("Enter the file name to create\n");
	scanf("%s",Fname);
	
	
	printf("enter the data that you want to write\n");
	scanf("%[ ^'\n']s",data);
	
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
	
	int iRet=write(fd,data,strlen(data));
	printf("%d bytessuccessfully written in file\n",iRet);
	
	return 0;
}//TYPE [d:][path]filename