#include<stdio.h>
//1	4000
//2	8000
//5	20000
//10 40000
void jwellersportal(int iweight)
{
	switch(iweight)
	{
		case 1:
		printf("your bill amount is 4000\n");
		break;
		
		case 2:
		printf("your bill amount is 8000\n");
		break;
		
		case 5:
		printf("your bill amount is 20000\n");
		break;
		
		case 10:
		printf("your bill amount is 40000\n");
		break;
		
		default:
		printf("invalid weight\n");
		
		}
	
}
int main()
{
	int ivalue=0;
	printf("enter number of gram that you want to purchase\n");
	scanf("%d",&ivalue);
	
	jwellersportal(ivalue);
	return 0;
}