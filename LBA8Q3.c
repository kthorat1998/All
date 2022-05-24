//Accept N number from user and Display all such number that is even and divisible by 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int icnt=0;
	
	printf("number  even and divisible by 5 is:\n");
	for(icnt=0;icnt<iLength;icnt++)
	{   
		if((Arr[icnt]%5==0)&&(Arr[icnt]%2==0))
		{
			printf("%d\n",Arr[icnt]);
		}
	}
}
int main()
{
	int iSize=0,icnt=0;
	int *p=NULL;
	
	printf("Enter number of elements");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}
	printf("enter value of array\n");
	for(icnt=0;icnt<iSize;icnt++)
	{
		scanf("%d",&p[icnt]);
	}
	Display(p,iSize);
	free(p);
	
	return 0;
	
}