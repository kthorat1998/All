//write a program which accept string from user and check whether it contain vowel or not

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
	while(*str!='\0')
	{
		if((*str!='a')||(*str!='e')||(*str!='i')||(*str!='o')||(*str!='u')||
		(*str!='A')||(*str!='E')||(*str!='I')||(*str!='O')||(*str!='U'))
			{
				return false;
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
	bool bRet=false;
	printf("enter string:");
	scanf("%[^'\n']s",Arr);
	
	bRet=ChkVowel(Arr);
	if(bRet==true)
	{
	  printf("string contain vowel");
	}
	else
	{
	  printf("string do not contain vowel");
	}	
	
	return 0;
}