//Accept number from user and check whether that number is even or odd
#include<stdio.h>
#define true 1
#define false 0

typedef int bool;
int ChkEven(int iNo)
{
	if(iNo%2==0)
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
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	bRet=ChkEven(iValue);
	if(bRet==true)
	{
		printf("given number is even%d\n",bRet);
	}
	else
	{
	    printf("given number is odd%d\n",bRet);	
	}
	
	return 0;
}