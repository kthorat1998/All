#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Search(int Arr[],int iLength,int iNo)
{
	int icnt=0;
	
	for(icnt=iLength-1;icnt>=0;icnt--)
	{
		if(Arr[icnt]==iNo)
		{
			break;
		}
	}
	return icnt;
}
int main()
{
	int iSize=0,icnt=0,iValue=0,iRet=0;
	int *iptr=NULL;
	
	printf("Enter the size of array\n");
	scanf("%d",&iSize);
	
	iptr=(int*)malloc(iSize*sizeof(int));
	
	printf("enter the values of array\n");
	for(icnt=0;icnt<iSize;icnt++)
	{
		scanf("%d",&iptr[icnt]);
	}
	
	printf("Enter the element to search\n");
	scanf("%d",&iValue);
	
	iRet=Search(iptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("There is no such a element\n");
	}
	else
	{
		printf("element 1st occured at:%d\n",iRet);
	}
	free(iptr);
	
	return 0;
}