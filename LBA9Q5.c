//Accept N number from user and accept one onther number as No 
//check frequency of that number
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{  
	int icnt=0;
	int Freq=0;
	for(icnt=0;icnt<iLength;icnt++)
	{
	if(Arr[icnt]==iNo)
	  {
		  Freq++;
	  }
	 
    }
	return Freq;
}
int main()
{
	int iSize=0,icnt=0;
	int *iptr=NULL;
	int iRet=0;
	int iValue=0;
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
	
	printf("Enter number that you want to count frequency\n");
	scanf("%d",&iValue);
	
	iRet=Frequency(iptr,iSize,iValue);
	
	printf(" frequency is:%d\n",iRet);
	free(iptr);
	return 0;
}