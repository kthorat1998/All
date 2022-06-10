/* write a program which accept 2 string from user and copy that character of string into another string
by converting all capital character into small case*/

#include<stdio.h>

void  strCpySmall(char*src,char*dest)
{	
	while(*src!='\0')
	{
		if(*src>='A' && *src<='Z')
		{
			*src=*src+32;
		}
		*dest=*src;
	    dest++;
		src++;
	}
	*dest!='\0';
	
}
int main()
{
	char Arr[30]="KOMAL";
	char Brr[30];
	

     strCpySmall(Arr,Brr);
	 
	 printf("modified string is:%s",Brr);
	 
	return 0;
}