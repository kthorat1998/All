#include<stdio.h>

int FactorialI(int iNo)
{
	auto int icnt=0,iFact=1;
	while(iNo!=0)
	{
		iFact=iFact*iNo;
		iNo--;
	}
	return iFact;
}

int main()
{
	int iValue=0,iRet=0;
	printf("enter the number\n");
	scanf("%d",&iValue);
	
	iRet=FactorialI(iValue);
	
	printf("Factorial of number is:%d\n",iRet);
	
	return 0;
}