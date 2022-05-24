//Accept N number from user and accept one another number as No,
//return index of last occurance of that No

#include<stdio.h>
#include<stdlib.h>

int product(int Arr[],int iLength)
{  
	int icnt=0;
	int iProd=1;
	for(icnt=1;icnt<iLength;icnt++)
	{
	if(Arr[icnt]%2!=0)
	  {
		iProd=iProd*Arr[icnt];
	  }
	 
    }
	return iProd;
	
}
int main()
{
	int iSize=0,icnt=0;
	int *iptr=NULL;
	int iRet=0;
	
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

	iRet=product(iptr,iSize);
	printf("product is:\n%d",iRet);
	free(iptr);
	return 0;
}