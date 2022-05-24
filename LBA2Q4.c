//Accept two number from user and Display first number in second number of times
#include<stdio.h>
void Display(int iNo,int iFrequency)
{
	int INT=0;
	for(INT=1;INT<=iFrequency;INT++)
	{
		printf("iNo\n",iNo);
	}
}
int main()
{
	int iValue=0;
	int iCount=0;
	
	printf("enter Number\n");
	scanf("%d",&iValue);
	
	printf("enter Frequency\n");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	return 0;
}