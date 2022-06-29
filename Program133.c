// Accept two file from user and compare
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<stdbool.h>

#define FILESIZE 1024

bool FileCompare(char Source[],char Destination[])
{
	int Fdsrc=0,Fddest=0,iRet1=0,iRet2=0,icmp=0;
    char Buffer1[FILESIZE];
	char Buffer2[FILESIZE];
	 
    Fdsrc=open(Source,O_RDONLY);
	if(Fdsrc==-1)
	{
		printf("unable to open source file\n");
		return false;
	}
	 Fddest=open(Destination,O_RDONLY);
	 if(Fddest==-1)
	 {
		 printf("unable to open Destination file\n");
		 return false ;
	 }
	 
	 while(1)
	 {
	   	 iRet1=read(Fdsrc,Buffer1,FILESIZE);
		 iRet2=read(Fddest,Buffer2,FILESIZE);
		 
		 if((iRet1==0)||(iRet2==0)||(iRet1!=iRet2))
		 {
			 break;
		 }
		 icmp=memcmp(Buffer1,Buffer2,iRet1);//1st add,2nd add,kiti read kela
		 
		 if(icmp!=0)
		 {
			 break;
		 }
	 }
	 
	 close(Fdsrc);
	 close(Fddest);
	 
	 if((iRet1==0)&&(iRet2==0))
	 {
		return true;
	 }
	else
	{
		return false;
	}
}

int main()
{
	char Fname1[20];
	char Fname2[20];
	bool bRet=false;
	printf("Enter the name of file which contain data\n");

	scanf("%s",Fname1);
	
	printf("Enter the name of file that you want to concate \n");
	scanf("%s",Fname2);
	
	bRet=FileCompare(Fname1,Fname2);
	if(bRet==true)
	{
		printf("files are same\n");
	}
	else
	{
		printf("files not same\n");
	}
	return 0;
}