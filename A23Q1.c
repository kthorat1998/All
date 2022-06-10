//Write a program which display Ascii table that contain symbol,decimal,hexadecimal,
//octal representaion of every member from 0 to 255

#include<stdio.h>

void DisplayASCII()
{
	int icnt=0;
	char ch='\0';
	
	for(icnt=0;icnt<=255;icnt++)
	{
		printf("%c",ch);
		ch=ch+1;
		
	}
}
int main()
{
	DisplayASCII();
	
	return 0;
}