//write a program Accept number from user and write summation of its nonfactor

#include<stdio.h>
int SumNonFact(int iNo)
{
	int iNFact=0;
	int iSum=0;
	for(iNFact=1;iNFact<iNo;iNFact++)
	{
		if(iNo%iNFact!=0)
		{
			iSum=iSum+iNFact;
		}
	}
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFact(iValue);
	printf("%d\n",iRet);
	
	return 0;
}