#include<stdio.h>

void Display(int iNo)
{
	static int icnt=0;
	
	if(icnt<iNo)
	{
		printf("%c ",'a'+icnt);
		icnt++;
		
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