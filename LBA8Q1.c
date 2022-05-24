//Accept N number from user and return differnce between summation of even element and summation of odd number

#include<stdio.h>
//Accept N number from user and return difference between summation of even number 
//Summation of odd number
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
	int iEven=0,iOdd=0,icnt=0,iDiff=0;
	
	for(icnt=0;icnt<iLength;icnt++)
	{
		if(Arr[icnt]%2==0)
		{
			iEven=iEven+Arr[icnt];
		}
		else
		{
			iOdd=iOdd+Arr[icnt];
		}
	}
	iDiff=iEven-iOdd;
	return iDiff;
}
int main()
{
	int iSize=0,iRet=0,icnt=0;
	int *iptr=NULL;
	
	printf("Enter the size of array\n");
	scanf("%d",&iSize);
	
	iptr=(int*)malloc(iSize*sizeof(int));
	
	if(iptr==NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
    }
	
     printf("Enter element of array\n");
     for(icnt=0;icnt<iSize;icnt++)
	 {
		 scanf("%d",&iptr[icnt]);
	 }
	 
	 iRet=Difference(iptr,iSize);
	 
	 printf("Difference is:%d\n",iRet);
	 
	 free(iptr);
	 return 0;
}