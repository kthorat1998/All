//Accept number from user and display onlu even number
 
#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)
{
   int icnt=0,iEvencnt=0;
    for(icnt=0;icnt<iLength;icnt++)
 {
	if((Arr[icnt]%2)==0)
	{
		iEvencnt++;
	}
  }	
  return iEvencnt;
}
int main()
{
	int iSize=0,icnt=0,iRet=0;
	int *iptr=NULL;
	
	printf("Enter number of element\n");
	scanf("%d",&iSize);
	
	iptr=(int*)malloc(iSize*sizeof(int));
	
	printf("enter the value of array:\n");
	for(icnt=0;icnt<iSize;icnt++)
	{
		scanf("%d",&iptr[icnt]);
	}
	iRet=CountEven(iptr,iSize);
	printf("Even number is%d\n",iRet);
	
	free(iptr);
	return 0;
}