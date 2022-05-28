#include<stdio.h>

 int Addition(int iNo1,int iNo2)
 {
	int ians=0;
    ians=iNo1+iNo2;
   return ians;	
 }
int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	
	printf("Enter the first number \n");
	scanf("%d",&iValue1);
	
	printf("Enter the second number\n");
	scanf("%d",&iValue2);
	
	iRet=Addition(iValue1,iValue2);
	
	printf("Addition is:%d\n",iRet);
	return 0;
}