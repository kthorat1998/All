/* write a program which accept 2 string from user and copy that character of string into another string
by converting all small character into capital case*/

#include<stdio.h>

void  strCpySmall(char*src,char*dest)
{	
	while(*src!='\0')
	{
		if(*src>='a' && *src<='z')
		{
			*src=*src-32;
		}
		*dest=*src;
	    dest++;
		src++;
	}
	*dest!='\0';
	
}
int main()
{
	char Arr[30]="Marvellous python 2";
	char Brr[30];
	

     strCpySmall(Arr,Brr);
	 
	 printf("modified string is:%s",Brr);
	 
	return 0;
}