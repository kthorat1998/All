#include<stdio.h>

int CountSmallI(char *str)
{
	int iCount=0;
	while(*str!='\0')
	{
		if(*str>='a'&&*str<='z')
		{
			iCount++;
		}
		str++;
	}
	return iCount;
}
int main()
{
	
	char Arr[20];
	int iRet=0;
	
	printf("enter string\n");
	scanf("%[^'\n']",Arr);
	
	iRet=CountSmallT(Arr);
	printf("number of small character are%d:\n",iRet);
	return 0;
}