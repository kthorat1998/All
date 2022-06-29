#include<stdio.h>

int AddDig(int iNo)
{
	int iSum=0,iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
		
	}
	return iSum;
}
int main()
{
	int iRet=0;
	int iValue=0;
	printf("enter the number\n");
	scanf("%d",&iValue);
	
	iRet=AddDig(iValue);
	
	printf("Addition of digit is%d:\n",iRet);
	return 0;
}