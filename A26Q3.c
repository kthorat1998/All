/* accept one string from user and one character from user and return index of first occurence 
of that character */

#include<stdio.h>

int FirstChar(char *str,char ch)
{   int flag=0;
	int icnt=0;
	
	while(*str!='\0')
	{
		if(*str!=ch)
		{
			icnt++;
		}
		else if(*str==ch)
		{
			flag++;
			break;
		}
		
		str++;
	}
	if(flag==0)
	{
		return -1;
	}
	else
	{
		return icnt;
	}
	
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
	
	iRet=FirstChar(Arr,cValue);
	
	printf("first occurence of that character is:%d\n",iRet);
	
	return 0;
}