#include<stdio.h>

void DisplayClass(int iNo)
{
	if(iNo<35)
	{
		printf("Fail\n");
	}
	else if((iNo>=35)&&(iNo<50))
	{
		printf("Pass class\n");
	}
	else if((iNo>=50)&&(iNo<60))
	{
		printf("second class\n");
	}
	else if((iNo>=60)&&(iNo<70))
	{
		printf("first class\n");
	}
	else if(iNo>=70)
	{
		printf("first class with distinction\n");
	}
}
int main()
{
   int iValue=0;
   printf("enter the number\n");
   scanf("%d",&iValue);
   
   DisplayClass(iValue);
     
	return 0;
}