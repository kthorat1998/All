//summation of n numbers
#include<stdio.h>

int summation(int ino)
{
	int isum=0;
	int icnt=0;
	
	for(icnt=1;icnt<=ino;icnt++)
	{
		isum=isum+icnt;
	}
	return isum;
}

int main()
{
	int ivalue=0;
	int iret=0;
	printf("enter the number\n");
	scanf("%d",&ivalue);
	
	iret=summation(ivalue);
	
	
	printf("summation is:%d\n",iret);
	return 0;
}