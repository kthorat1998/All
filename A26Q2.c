/* accept one string from user and one character from user and return frequency of that character */

#include<stdio.h>


int CountChar(char *str,char ch)
{
	int icnt=0;
	
	while(*str!='\0')
	{
		if(*str==ch)
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
	char cValue='\0';
	int iRet=0;
	
	printf("enter string:\n");
	scanf("%[^'\n']s",Arr);
	
	printf("enter character:\n");
	scanf(" %c",&cValue);
	
	iRet=CountChar(Arr,cValue);
	
	printf("frequency of that character is:%d\n",iRet);
	return 0;
}