
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

int CountWhiteSpace(char Fname[])
{
	int fd=0,i=0,icnt=0;	
	char Data[FILESIZE];
	int iRet=0;
	int iSum=0;
	
	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("unable to open the file\n");
		return -1;
	}

	
	while((iRet=read(fd,Data,sizeof(Data)))!=0)
	{
		for(i=0;i<iRet;i++)
		{
			if(Data[i]==' ')
			{
				icnt++;
			}
		}
	}
	
	close(fd);
	return icnt;
}
int main()
{
	char Fname[20];
	int iRet=0;
	
	printf("ENter file name to open\n");
	scanf("%s",Fname);
	
  iRet=CountWhiteSpace(Fname);
   printf("WhiteSpace letter in file is:%d\n",iRet);
   
	return 0;
}