//Accept number of rows and columns from user and display below pattern

#include<stdio.h>
void pattern(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			
				printf("*\t",j);
			
		}
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter number of rows and columns");
	scanf("%d%d",&iValue1,&iValue2);
	
	pattern(iValue1,iValue2);
	return 0; 
}