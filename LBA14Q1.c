//Accept number of rows and columns from user and display below pattern

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='A';j<=iCol;ch++,j++)
		{
			printf("%c\t",ch);
		}
		printf("\n");
	}
	
}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter the columns\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}