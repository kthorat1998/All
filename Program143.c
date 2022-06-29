#include<stdio.h>

int CountSmallR(char *str)
{
	static int iCount=0;
	if(*str!='\0')
	{
		if(*str>='a'&&*str<='z')
		{
			iCount++;
		}
		str++;
		CountSmallR(str);
	}
	return iCount;
}
int main()
{
	
	char Arr[20];
	int iRet=0;
	
	printf("enter string\n");
	scanf("%[^'\n']",Arr);
	
	iRet=CountSmallR(Arr);
	printf("number of small character are%d:\n",iRet);
	return 0;
}