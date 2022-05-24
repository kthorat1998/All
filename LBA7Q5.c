//Write a program which accept number from user and return difference between summation of even digits and 
//summation of odd digit
#include<stdio.h>
int CountDiff(int iNo)
{
	int iDigit=0;
	int iSum=0;
	int iSumx=0,iDiff=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iSum=iSum+iDigit;
		}
		else
		{
			iSumx=iSumx+iDigit;
		}
		iNo=iNo/10;
		iDiff=iSum-iSumx;
	}
	return iDiff;
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=CountDiff(iValue);
	printf("%d",iRet);
	
	return 0;
}