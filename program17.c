#include<stdio.h>

void display(int ino)
{
	int icnt=0;
	if(ino<0)
	{
		printf("enter valid positive number\n");
		return;
	}
	
	for(icnt=1;icnt<=ino;icnt++)
	{
		printf("jay Hanuman...!\n");
	}
}
int main()
{
	 int ivalue=0;
	printf("enter the number\n");
	scanf("%d",&ivalue);
	
	display(ivalue);
	return 0;
}