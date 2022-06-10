//write a program which accept string from user and count number of small character

#include<stdio.h>
int CountSmall(char *str)
{
	int icnt=0;
	while(*str!='\0')
	{
		if(*str>='a' && *str<='z')
		{
			icnt++;
			
		}
		str++;
	}
	return icnt;
}
int main()
{
	
	char Arr[20];
	int iRet=0;
	printf("enter string:");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountSmall(Arr);
	
	printf("Number of small are:%d\n",iRet);
	
	return 0;
}