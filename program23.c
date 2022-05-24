#include<stdio.h>
#include<stdbool.h>

bool Check(int ino)
{
	if(((ino%3)==0)&&((ino%5)==0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int ivalue=0;
	bool bret=false;
	printf("enter the number\n");
	scanf("%d",&ivalue);
	bret=Check(ivalue);
	if(bret==true)
	{
		printf("%d is divisible by 3 &5\n",ivalue);
	}
	else
	{
		printf("%d is not divisible by 3&5\n",ivalue);
	}
	return 0;
}