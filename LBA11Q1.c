//Accept N number from user and return the largest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	int icnt=0;
	int iMax=Arr[0];
	for(icnt=0;icnt<iLength;icnt++)
	{
		if(iMax<Arr[icnt])
		{
			iMax=Arr[icnt];
			
		}
	}
	return iMax;
}
int main()
{
	int iSize=0,iRet=0,icnt=0;
	int*p=NULL;
	
	printf("Enter number of element\n");
	scanf("%d",&iSize);
	

	p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}
	printf("enter the values\n");
	for(icnt=0;icnt<iSize;icnt++)
	{
		scanf("%d",&p[icnt]);
	}
	
	iRet=Maximum(p,iSize);
	
	printf("largest number is:%d\n",iRet);
	
	free(p);
	
	return 0;
}