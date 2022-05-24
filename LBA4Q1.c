//write a program which accept number from user and display its multiplication of factor

#include<stdio.h>
int MultFact(int iNo)
{
	int iFact=0;
	int iMult=1;
	for(iFact=1;iFact<=(iNo/2);iFact++)
	{
		if(iNo%iFact==0)
		{
			iMult=iMult*iFact;
		}
	}
	return iMult;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=MultFact(iValue);
	
	printf("%d\n",iRet);
	
	return 0;
} 