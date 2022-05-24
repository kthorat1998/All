//Except n number from user and perform addition
#include<stdio.h>
#include<stdlib.h>
  int Summation(int Arr[],int size)
  {
	  int icnt=0;
	  int iSum=0;
	  for(icnt=0;icnt<size;icnt++)
	  {
		  iSum=iSum+Arr[icnt];
		  
	  }
	  return iSum;
  }
int main()
{
	int iLength=0,icnt=0,iRet=0;
	int*ptr=NULL;
	printf("enter no of element \n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(iLength));
	
	printf("enter element of array:\n");
	for(icnt=0;icnt<iLength;icnt++)
	{
	scanf("%d",&ptr[icnt]);
	}
	
	iRet=Summation(ptr,iLength);
	printf("Summation is:%d\n",iRet);
	
	return 0;
}