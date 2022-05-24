//Accept number of rows and columns from user and display below pattern

#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			if(i>=j)
			{
				printf("*\t");
			}
            else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}
int main()
{
	int iValue1,iValue2;
	printf("Enter the 1st number\n");
	scanf("%d",&iValue1);
	printf("Enter the 2nd number\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}