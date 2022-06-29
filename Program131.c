// Accept two file from user and copy data from one file to another
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

void FileCopy(char Sourse[],char Destination[])
{
	int Fdsrc=0,Fddest=0,iRet=0;
    char Buffer[FILESIZE];
    Fdsrc=open(Sourse,O_RDONLY);
	if(Fdsrc==-1)
	{
		printf("unable to open source file\n");
		return;
	}
	 Fddest=creat(Destination,0777);
	 if(Fddest==-1)
	 {
		 printf("unable to creat Destination file\n");
		 return ;
	 }
	 
	 while((iRet=read(Fdsrc,Buffer,FILESIZE))!=0)
	 {
		 write(Fddest,Buffer,iRet);
	 }
	 close(Fdsrc);
	 close(Fddest);
}

int main()
{
	char Fname1[20];
	char Fname2[20];
	
	printf("Enter the name of file which contain data\n");

	scanf("%s",Fname1);
	
	printf("Enter the name of file that you want to create \n");
	scanf("%s",Fname2);
	
	FileCopy(Fname1,Fname2);
	
	return 0;
}