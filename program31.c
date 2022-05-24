#include<stdio.h>
typedef unsigned long int ULONG;
  ULONG power(int iNo1,int iNo2)
 {
	 ULONG lmult=1;
	register int icnt=0;
	 
 
	 for(icnt=1;icnt<=iNo2;icnt++)
		 
	 lmult=lmult*iNo1;
	 return lmult;
 }
int main()
{
	 auto int iValue1=0,iValue2=0;
	 auto  ULONG lRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue1);
	
	printf("Enter number\n");
	scanf("%d",&iValue2);
	
    lRet=power(iValue1,iValue2);
	printf("power %ld\n",lRet);
    
	
	return 0;
}