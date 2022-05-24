#include<stdio.h>

int addition(int ino1,int ino2)
{
	 int ians=0;
    ians=ino1+ino2;
	return ians;
}
int substraction(int ino1,int ino2)
{
	int ians=0;
	ians=ino1-ino2;
	return ians;
}
int main()
{
	int ivalue1=0, ivalue2=0,iret=0;
	
	printf("enter the first number\n");
	scanf("%d",&ivalue1);
	
	printf("enter the second number\n");
	scanf("%d",&ivalue2);
	
	iret=addition(ivalue1,ivalue2);
	printf("addition is :%d\n",iret);
	
	iret =substraction(ivalue1,ivalue2);
	printf("substraction is:%d\n",iret);
	
	return 0;
}