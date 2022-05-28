#include<stdio.h>

void DisplayFactor(int iNo)
{
	int icnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	printf("factors are:\n");
	for(icnt=1;icnt<=iNo;icnt++)
	{
	   if((iNo%icnt)==0)
	    {
		   printf("%d\t",icnt);
		
	    }
	}
	printf("\n");
}
int CountFactor(int iNo)
{   int iCountFact=0;
	int icnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(icnt=1;icnt<=iNo;icnt++)
	{
	   if((iNo%icnt)==0)
	    {
		   iCountFact++;
		
	    }
	}
	return iCountFact;
}
int main()
{
   int iValue=0,iRet=0;
   printf("enter the number\n");
   scanf("%d",&iValue);
   
   DisplayFactor(iValue);
   iRet=CountFactor(iValue);
   printf("Number of Factor are:%d\n",iRet);
	return 0;
}