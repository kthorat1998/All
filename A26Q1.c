/* accept one string from user and one character from user and check whether
that character is present in string or not */

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{
	while(*str!='\0')
	{
		if(*str!=ch)
		{
		str++;
		}
		else
		{
			return true;
		}
			
	}
}
int main()
{
	char Arr[20];
	char cValue;
	bool bRet=false;
	
	printf("enter string:\n");
	scanf("%[^'\n']s",Arr);
	
	printf("enter character:\n");
     scanf(" %c",&cValue);
	
	bRet=ChkChar(Arr,cValue);
	if(bRet==true)
	{
		printf("character found");
	}
	else
	{
		printf("character not found");
	}
	 
	return 0;
}