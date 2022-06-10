//Accept character from user and check whether itis small case or not

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

bool ChkSmall(char ch)
{
	if(ch>='a' && ch<='z')
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
	
	bRet=ChkSmall(cValue);
	if(bRet==true)
	{
		printf("character is smallcase");
	}
	else
	{
		printf("character is not smallcase");
	}
	return 0;
}