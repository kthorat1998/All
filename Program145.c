#include<stdio.h>

int AddDigR(int iNo)
{
	static int iSum=0,iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		
		iSum=iSum+iDigit;
		
		iNo=iNo/10;
		
		AddDigR(iNo);
		
	}
	return iSum;
}
int main()
{
	int iRet=0;
	int iValue=0;
	printf("enter the number\n");
	scanf("%d",&iValue);
	
	iRet=AddDigR(iValue);
	
	printf("Addition of digit is:%d\n",iRet);
	return 0;
}