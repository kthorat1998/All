//Accept number of rows and columns from user and display below pattern

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';
	for(i=1,ch='A';i<=iRow;ch++,i++)
	{
		for(j=1;j<=iCol;j++)
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