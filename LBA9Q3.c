//Accept N number from user and check that number contain 11 or not in it

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define true 1
#define false 0

bool Check(int Arr[],int iLength)
{  
	int icnt=0;
	
	for(icnt=0;icnt<iLength;icnt++)
	{
	if(Arr[icnt]==11)
	  {
		  return true;
		
	 }
	 else
	 {
		 return false;
	 }
    }
}
int main()
{
	int iSize=0,icnt=0;
	int *iptr=NULL;
	bool bRet=false;
	
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
	
	bRet=Check(iptr,iSize);
	
	if(bRet==true)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is absent\n");
	}
	
	free(iptr);
	return 0;
}