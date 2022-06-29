#include<stdio.h>

void Display(int iNo)
{
	static char ch='a';
	if(iNo>0)
	{
		printf("%c ",ch);
		ch++;
		iNo--;
		Display(iNo);
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