#include<stdio.h>

void display(int ino)
{
	int icnt=0;
	for(icnt=1;icnt<=ino;icnt++)
	{
		printf("jay ganesh....!\n");
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