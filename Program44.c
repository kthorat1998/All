#include<stdio.h>

int Factorial(int iNo)
{
	int iFact=1;
	int icnt=0;
	for(icnt=1;icnt<=iNo;icnt++)
	{
		iFact=iFact*icnt;
		//iFact*=icnt;
	}
	return iFact;
}
int main()
{
	int iValue=0,iRet=0;
	
	printf("enter the number\n");
	scanf("%d",&iValue);
	
	iRet=Factorial(iValue);
	
	printf("factorial is:%d\n",iRet);
	return 0;
}