//Accept N number from user and accept one another number as No,
//check whether that no is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[],int iLength,int iNo)
{  
	int icnt=0;
	bool bFlag=false;
	for(icnt=0;icnt<iLength;icnt++)
	{
	if(Arr[icnt]==iNo)
	  {
		  bFlag=true;
	  }
	 
    }
	return bFlag;
}
int main()
{
	int iSize=0,icnt=0;
	int *iptr=NULL;
	bool  bRet=false;
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
	
	printf("Enter number that you want to Search\n");
	scanf("%d",&iValue);
	
	bRet=Check(iptr,iSize,iValue);
	if(bRet==true)
	{
		printf("number is present\n");
	}
	else
	{
		printf("number is not present\n");
	}
	
	free(iptr);
	return 0;
}