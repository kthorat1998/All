// Accept character from user and check whether it is special symbol of not

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
	if((ch>=' ' && ch<='/')||(ch>=':' && ch<='@')||(ch>='[' && ch<='`')||
	(ch>='{' && ch<='~'))
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
	
	printf("enter character:\n");
	scanf("%c",&cValue);
	
	bRet=ChkSpecial(cValue);
	if(bRet==true)
	{
		printf("it is special  character");
	}
	else
	{
		printf("it is  not special character");
	}
	
	return 0;
}