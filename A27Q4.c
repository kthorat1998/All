/* write a program which accept string from user and copy  small character of that string*/

#include<stdio.h>

void strCpysmall(char*src,char*dest)
{
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
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

     strCpysmall(Arr,Brr);
	 
	 printf("copy of  small string is:%s",Brr);
	 
	return 0;
}