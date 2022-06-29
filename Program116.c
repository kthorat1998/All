#include<stdio.h>

//123
//3 2 1

void DisplayI(int No)
{
	 
	while(No!=0)
	{
		printf("%d\t",No%10);
		No=No/10;
	}
	printf("\n");
}

void DisplayR(int No)
{
	if(No!=0)
	{
		printf("%d\t",No%10);
		No=No/10;
		DisplayR(No);
	}
}

int main()
{
	DisplayI(123);
	DisplayR(123);
	
	
	return 0;
}