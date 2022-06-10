//write a program which accept string from user and count number of capital character

#include<stdio.h>
int CountCapital(char *str)
{
	int icnt=0;
	while(*str!='\0')
	{
		if(*str>='A' && *str<='Z')
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
	
	iRet=CountCapital(Arr);
	
	printf("Number of capitals are:%d\n",iRet);
	
	return 0;
}