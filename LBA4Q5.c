//write a program which accept number from user and return differnece between summation of its all factor
// and non factor

#include<stdio.h>
int SumFact(int iNo)
{
	int i=0;
	int iSum=0;
	for(i=1;i<=iNo;i++)
	{
		if(iNo%i==0)
		{
			iSum=iSum+i;
	    }
	}
      return iSum;	
}
int SumNonFact(int iNo)
{
	
	int i=0;
	int iSumx=0;
	for(i=1;i<=iNo;i++)
	{
		 if(iNo%i!=0)
		{
			iSumx=iSumx+i;
		}	
    }return iSumx;                     //error
}
int FactDiff(int iNo)
{
	int iDiff=0;
	iDiff=(SumFact(iNo)-SumNonFact( iNo));
	return iDiff;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=FactDiff(iValue);
	printf("%d\n",iRet);
	return 0;
}