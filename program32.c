#include"header32.h"

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