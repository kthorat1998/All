
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void DisplayData(char Fname[])
{
	int fd=0;	
	char Data[10];
	int iRet=0;
	
	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("unable to open the file\n");
		return;
	}
	printf("file is successfully opened with fd%d\n",fd);
	
	while((iRet=read(fd,Data,sizeof(Data)))!=0)
	{
		write(1,Data,iRet);
	}
	
	close(fd);
}
int main()
{
	char Fname[20];
	
	
	printf("ENter file name to open\n");
	scanf("%s",Fname);
	
   DisplayData(Fname);
   
   
	return 0;
}