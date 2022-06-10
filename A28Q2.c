/* write a program which accept 2 string from user and copy that character of string into another string
by removing all white spaces*/

#include<stdio.h>

void strCpy(char*src,char*dest)
{	
	while(*src!='\0')
	{
		if(*src==' ')
		{
			src++;
		}
		*dest=*src;
		
		dest++;
		src++;

	}
	*dest!='\0';
	
}
int main()
{
	char Arr[30]="Marvel lous pyth on";
	char Brr[30];
	

     strCpy(Arr,Brr);
	 
	 printf("modified string is:%s",Brr);
	 
	return 0;
}