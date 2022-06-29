#include<stdio.h>

void Display(int iNo)
{
	int icnt=0;
	char ch='a';
	for(icnt=1;icnt<=iNo;ch++,icnt++)
	{
		printf(" %c",ch);
		
	}
}
int main()
{
	int iRet=0;
	int iValue=0;
	printf("enter the number\n");
	scanf("%d",&iValue);
	
    Display(iValue);
	return 0;
}