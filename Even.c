#include<stdio.h>
#include<stdbool.h>

 bool CheckEven(int iNo)
 {
	 if(iNo<0)
	 {
		 iNo=-iNo;
	 }
	 if((iNo%2)==0)
	 {
		 return true;
	 }
	 else
	 {
		 return false;
	 }
 }
int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("enter the number\n");
	scanf("%d",&iValue);
	
	bRet=CheckEven(iValue);
	if(bRet==true)
	{
		printf("given number is even\n");
	}
	else
	{
		printf("given number is odd\n");
	}
	
	
	return 0;
}