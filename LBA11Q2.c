//Accept N number from user and return the smallest number

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
	int icnt=0;
	int iMin=Arr[0];
	for(icnt=0;icnt<iLength;icnt++)
	{
		if(iMin>Arr[icnt])
		{
			iMin=Arr[icnt];
			
		}
	}
	return iMin;
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
	
	iRet=Minimum(p,iSize);
	
	printf("smallest number is:%d\n",iRet);
	
	free(p);
	
	return 0;
}