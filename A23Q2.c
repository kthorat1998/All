/*Accept character from user and if character is small display its corresponding 
chapital and if it is capital then display it in small and other case its remain as it is*/

#include<stdio.h>

void Display(char ch)
{
	if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
		printf("%c",ch);
		
	}
	else if(ch>='a' && ch<='z')
	{
		ch=ch-32;
		printf("%c",ch);
	}
	else
	{
		ch=ch;
		printf("%c",ch);
	}
}

int main()
{
	 char cValue='\0';
	 
	 printf("enter your character:\n");
	 scanf("%c",&cValue);
	 
	 Display(cValue);
	 
	return 0;
}