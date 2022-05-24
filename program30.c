
#include<stdbool.h>
#include<stdbool.h>
bool countFactor(int ino)
{
        int icnt=0;
		bool bFlag=true;
		if(ino<0)
		{
			ino=-ino;
		}
       for(icnt=2;icnt<=(ino/2);icnt++)
    {  
      if((ino%icnt)==0)
	    {
	   bFlag=false;
	   break;
        }	
     }
	return bFlag;
}

int main()
{
	int ivalue=0;
	int bRet;
	printf("Enter number\n");
	scanf("%d",&ivalue);
	
	bRet=checkPrime(ivalue);
	if(bRet==true)
	{
		printf("%d is a prime number\n",ivalue);
	}
	else
	{
	    printf("%d is a not prime number\n",ivalue);	
	}
	

	return 0;
	
}