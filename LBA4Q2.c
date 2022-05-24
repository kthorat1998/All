//write a program which accept number from user and display its factor in decresing order

#include<stdio.h>

void FactRev(int iNo)
{
	int iFact=0;
	for(iFact=(iNo/2);iFact>=1;iFact--)
	{
		if(iNo%iFact==0)
		{
			printf("%d\n",iFact);
		}
	}
} 

int main()
{
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	return 0;
}