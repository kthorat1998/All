//write a program which accept number from user and count frequency of 2 in it

#include<stdio.h>
int countTwo(int iNo)
{    int icnt=0;
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==2)
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
    
	iRet=countTwo(iValue);
	printf("frequency of 2 is: %d",iRet);
    
   return 0;	
}