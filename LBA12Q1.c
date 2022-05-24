//Accept number from user and Display below pattern

//input:5
//output:A B C D E

#include<stdio.h>
void Pattern(int iNo)
{
	char ch='\0';
	int icnt=0;
	for(icnt=1,ch='A';icnt<=iNo;ch++,icnt++)
	{
		printf("%c\t",ch);
	}
	
}
int main()
{
	int iValue=0;
	printf("Enter number of element\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	return 0;
}