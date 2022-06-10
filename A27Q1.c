/* write a program which accept string from user and copy the content*/

#include<stdio.h>

void strcpyX(char*src,char*dest)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
    *dest='\0';
}
int main()
{
	char Arr[30];
	char Brr[30];
	
	printf("enter string:\n");
	scanf("%[^'\n']s",Arr);

     strcpyX(Arr,Brr);
	 
	 printf("copy of string is:%s",Brr);
	return 0;
}