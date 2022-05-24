#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool SearchlastOcc(int Arr[],int iLength,int iNo)
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
{  int iRet;
	int iSize=0,icnt=0,iValue=0;
	int *iptr=NULL;
	printf("Enter number of element\n");
	scanf("%d",&iSize);
	
	iptr=(int*)malloc(sizeof(int)*iSize);
	
	
	printf("enter the value\n");
	for(icnt=0;icnt<iSize;icnt++)
	{
		scanf("%d",&iptr[icnt]);
	}
	
	printf("Enter the element that you want to search\n");
	scanf("%d",&iValue);
	
	iRet=SearchlastOcc(iptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("element is not there in array:%d\n");
	}
	else
	{
		printf("element last occure at:%d\n",iRet);
	}	
	
	free(iptr);
	return 0;
}