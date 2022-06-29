#include<stdio.h>

void Display(int iNo)
{
	int icnt=1;
	char ch='a';
	while(icnt<=iNo)
	{
		printf("%c",ch);
		icnt++;
		ch++;
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