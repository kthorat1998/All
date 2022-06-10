//Accept character from user and check whether it is capital or not

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
	if((ch>='A')&&(ch<='Z'))
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
   
   printf("enter the character:\n");
   scanf("%c",&cValue);
   
   bRet=ChkCapital(cValue);
   if(bRet==true)
   {
	   printf("character is capital");
   }
   else
   {
	   printf("character is not capital");
   }  
	
	return 0;
}