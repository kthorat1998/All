//Accept one number and check whether is divisible by 5 or not

#include<stdio.h>

typedef int bool;
#define true 1
#define false 0
int Check(int iNo)
{
	if((iNo%5)==0)
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
	bool bRet=false;
	printf("enter number\n");
	scanf("%d",&iValue);
	
	bRet=Check(iValue);
	if(bRet==true)
	{
		printf("Divisible by 5\n");
	}
	else
	{
		printf("not Divisible by 5\n");
	}
	return 0;
}