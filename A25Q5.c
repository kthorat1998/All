//count number or white space

#include<stdio.h>

int CountWhite(char *str)
{
	int icnt=0;
	
	while(*str!='\0')
	{
		if(*str==' ')
		{
			icnt++;
		}
		str++;
	}
	return icnt;
}
int main()
{
	int iRet=0;
	
	char Arr[20];
	
	printf("enter string:");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountWhite(Arr);
	
	printf("number of white spaces are:%d",iRet);
	return 0;
} 