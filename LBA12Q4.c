//Accept number from user and display below pattern

#include<stdio.h>

void pattern(int iNo)
{
	int icnt=0;
	for(icnt=1;icnt<=iNo;icnt++)
	{
		printf("#\t%d\t*\t",icnt);
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