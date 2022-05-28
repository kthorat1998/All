#include<stdio.h>

void Display(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int icnt=0;
	
	for(icnt=1;icnt<=iNo;icnt++)
	{
		printf("%d\t",icnt);
	}
}
int main()
{
	int iValue=0;
	
	printf("enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}