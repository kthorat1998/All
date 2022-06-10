/* write a program which accept 2 string from user and concate second string after 1st string*/

#include<stdio.h>

void strCatX(char*src,char*dest)
{
	while(*src!='\0')
	{
		src++;
	}
	while(*dest!='\0')
	{
		*src=*dest;
		src++;
		dest++;
		
	}
	*dest='\0';
	
}
int main()
{
	char Arr[50]="Marvellous Infosystem ";
	char Brr[30]="Logic Building";
	

     strCatX(Arr,Brr);
	 
	 printf("concate string is:%s",Arr);
	 
	return 0;
}