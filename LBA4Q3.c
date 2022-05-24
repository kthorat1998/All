//Write a program which accept number from user and display its non factor
#include<stdio.h>

int SumNonFact(int iNo)
{
	int iNFact=0;
	for(iNFact=1;iNFact<=iNo;iNFact++)
	{
		if(iNo%iNFact!=0)
		{
			printf("%d\n",iNFact);
		}
	}
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFact(iValue);
	
	return 0;
}