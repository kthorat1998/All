//write a program which accept number from user and count frequency of such a digit which are less than 6
#include<stdio.h>
int count(int iNo)
{    int icnt=0;
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<6)
		{
			icnt++;
		}
		
		iNo=iNo/10;
		
	}
	return icnt;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
    
	iRet=count(iValue);
	printf("frequency of digit less than 6 is: %d",iRet);
    
   return 0;	
}