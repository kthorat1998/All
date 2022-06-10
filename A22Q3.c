//Accept character from user and check whether itis digit or not

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

bool ChkDigit(char ch)
{
	if(ch>='0' && ch<='9')
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
	char cValue='\0';
	bool bRet=false;
	
	printf("enter the charcter:\n");
	scanf("%c",&cValue);
	
	bRet=ChkDigit(cValue);
	if(bRet==true)
	{
		printf("character is digit");
	}
	else
	{
		printf("character is not digit");
	}
	return 0;
}