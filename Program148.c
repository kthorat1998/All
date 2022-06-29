#include<stdio.h>

void Display(int iNo)
{
	static int icnt=1;
	static char ch='a';
	if(icnt<=iNo)
	{
		printf("%c ",ch);
		icnt++;
		ch++;
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