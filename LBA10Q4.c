//Accept N number from user and accept Range,Display all element from that range


#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[],int iLength,int iNo1,int iNo2)
{  
	int icnt=0;
	printf("elements in range is\n");
	for(icnt=0;icnt<iLength;icnt++)
	{
	if((Arr[icnt]>=iNo1)&&(Arr[icnt]<=iNo2))
	{
		printf("%d\n",Arr[icnt]);
	}
	
}}
int main()
{
	int iSize=0,icnt=0;
	int *iptr=NULL;
	int iRet=0;
	int iValue1=0,iValue2=0;
	printf("Enter the size of array\n");
	scanf("%d",&iSize);
	
	printf("enter starting point of range\n");
	scanf("%d",&iValue1);
	
	printf("enter ending point of range\n");
	scanf("%d",&iValue2);
	
	
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
	
	
	iRet=Range(iptr,iSize,iValue1,iValue2);
	
	free(iptr);
	return 0;
}