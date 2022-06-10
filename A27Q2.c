/* write a program which accept string from user and copy the content*/

#include<stdio.h>

void strNcpyX(char*src,char*dest,int icnt)
{
	while((*src!='\0')&&(icnt!=0))
	{
		*dest=*src;
		src++;
		dest++;
		icnt--;
	}
    *dest='\0';
}
int main()
{
	char Arr[30];
	char Brr[30];
	
	printf("enter string:\n");
	scanf("%[^'\n']s",Arr);

     strNcpyX(Arr,Brr,10);
	 
	 printf("copy of string is:%s",Brr);
	return 0;
}