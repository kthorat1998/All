#include<stdio.h>
#include<stdbool.h>

bool Chkarmstrong(int iNo)
{ 
   int iTemp=0, icnt=0,imult=1;
   int iDigcnt=0,iDigit=0,iSum=0;
   if(iNo<0)
   {
	   iNo=-iNo;
   }
	iTemp=iNo;
	
   while(iNo>0)
   {
	   iDigcnt++;
	   iNo=iNo/10;
   }
   iNo=iTemp;
   
   while(iNo>0)
   {
	   imult=1;
	   iDigit=iNo%10;
	   
	 for(icnt=1;icnt<=iDigcnt;icnt++)
	 { 
	 imult=imult*iDigit;
	 }
	   
	   iSum=iSum+imult;
	   iNo=iNo/10;
   }
   if(iSum==iTemp)
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
	bRet=Chkarmstrong(iValue);
	if(bRet==true)
	{
		printf("your number is armstrong%d\n",iValue);
	}
	else
	{
		printf("your number is not armstrong%d\n",iValue);
	}
	return 0;
}