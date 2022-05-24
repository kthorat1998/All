#include<stdio.h>
#include<stdbool.h>
bool CheckPallendrome(int iNo)

{
	int iDigit=0;
	int iRev=0;
	int itemp=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	itemp=iNo;
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	if(iRev==itemp)
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
	int iValue=0;
	bool bRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
   bRet=CheckPallendrome(iValue);
   if(bRet==true)
   {
	    printf("your number is Pallendrome %d\n",bRet);
   }
   else
   {printf("your number is not Pallendrome %d\n",bRet);}
   return 0;
}