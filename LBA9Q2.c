//Accept N number from user and return frequency of even numbers

#include<stdio.h>
#include<stdlib.h>
int FrequencyDiff(int Arr[],int iLength)
{
	int icnt=0,iCntEven=0,iCntOdd=0,iDiff=0;
	printf("frequency of even number is:\n");
	for(icnt=0;icnt<iLength;icnt++)
	{
		if(Arr[icnt]%2==0)
		{
			iCntEven++;
		}
		else
		{
			iCntOdd++;
		}
	}
	iDiff=iCntEven-iCntOdd;
	return iDiff;
} 
int main()
{
	int iSize=0,icnt=0,iRet=0;
	int *iptr=NULL;
	
	printf("Enter the size of array\n");
	scanf("%d",&iSize);
	
	iptr=(int*)malloc(iSize*sizeof(int));
	if(iptr==NULL)
	{
		printf("unable to allocate the memory\n");
		return -1;
	}
	printf("Enter the values of array\n");
	for(icnt=0;icnt<iSize;icnt++)
	{
		scanf("%d",&iptr[icnt]);
	}
	
	iRet=FrequencyDiff(iptr,iSize);
	printf("Result:%d\n",iRet);
	
	free(iptr);
	return 0;
}