//Accept character from user and check whether that character is vowel(a,e,i,o,u) or not

#include<stdio.h>
typedef int bool;
#define true 1
#define false 0

bool ChkVowel(char cValue)

{
	if(cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u')
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
	
	printf("Enter character\n");
	scanf("%c",&cValue);
	
	bRet=ChkVowel(cValue);
	if(bRet=true)
	{
		printf("your number is vowel\n",bRet);
	}
	else
	{
		printf("your number is not vowel\n",bRet);
	}
	return 0;
}