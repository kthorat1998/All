//Accept number from user check whether that number is perfect or not
#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
{
	int iCnt=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;(iCnt<=(iNo/2)&&(iSum<=iNo));iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iSum=iSum+iCnt;
		}
	}
	if(iSum==iNo)
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
	int bRet=0;
	printf("Enter your number\n");
	scanf("%d",&iValue);
	
	bRet=CheckPerfect(iValue);
	if(bRet==true)
	{
		printf("your number is perfect\n",iValue);
	}
	else
	{
		printf("your number is not perfect\n",iValue);
	}
	return 0;
}