//Accept number of rows and number of columns from user and display below pattern
//1 2 3 4 
//5 6 7 8 
//9 10 11 12
#include<stdio.h>
void pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i%2==0)
			{
				printf("%d\t",-j);
			}
			else
			{
			printf(" %d\t",j);
			}
		}
		printf("\n");
		
	}
	
}
int main()
{
	int iValue1=0, iValue2=0;
	
	printf("Enter number of rows and columns");
	scanf("%d%d",&iValue1,&iValue2);
	
	pattern(iValue1,iValue2);
	
	return 0;
}