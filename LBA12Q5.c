//Accept number from user and display below pattern

#include<stdio.h>

void pattern(int iNo)
{    int iMult=0;
	int icnt=0;
	for(icnt=1;icnt<=iNo;icnt++)
	{
		iMult=2*icnt;
		printf("%d\t",iMult);
	}
}
int main()
{
	int iValue=0;
	printf("Enter number of element\n");
	scanf("%d",&iValue);
	
	pattern(iValue);
	return 0;
}