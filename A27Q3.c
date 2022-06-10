/* write a program which accept string from user and copy  capital character of that string*/

#include<stdio.h>

void strCpyCap(char*src,char*dest)
{
	while(*src!='\0')
	{
		if((*src>='A')&&(*src<='Z'))
		{
		*dest=*src;
		dest++;
		
		}
		src++;
	}
    *dest='\0';
}
int main()
{
	char Arr[30];
	char Brr[30];
	
	printf("enter string:\n");
	scanf("%[^'\n']s",Arr);

     strCpyCap(Arr,Brr);
	 
	 printf("copy of  capital string is:%s",Brr);
	 
	return 0;
}