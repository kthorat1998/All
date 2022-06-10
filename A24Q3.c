//write a program which accept string from user and return difference between frequency of small 
//character and capital characters

#include<stdio.h>

int Differnce(char *str)
{ 
   int iCcnt=0,iScnt=0,iDiff=0;

	while(*str!='\0')
	{
		if(*str>='A' && *str<='Z')
		{
			iCcnt++;
			
		}
		
		else if(*str>='a' && *str<='z')
		{
			iScnt++;
			
		}
		str++;	
	}
	
	iDiff=iCcnt-iScnt;
	
	return iDiff;
	
}
int main()
{
	char Arr[20];
	
	int iRet=0;
	
	printf("enter string:\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=Differnce(Arr);
	
	printf("Difference is : %d\n",iRet);
	
	return 0;
}