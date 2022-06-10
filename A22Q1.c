//Accept character from user and check  whether it is alphabet or not

//input: F
//output: TRUE
//input:&
//output:False

#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0

bool ChkAlpha(char ch)
{
	if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
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
	
	printf("enter the character:\n");
	scanf("%c",&cValue);
	
	bRet=ChkAlpha(cValue);
	if(bRet==true)
	{
		printf("it is character");
	}
	else
	{
		printf("it is not a character");
	}
return 0;	
}