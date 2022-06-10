/* Accept character from user .if it is chapital then display all the character
from input character yill Z.if input character is small then print all character in 
revers order till a.if other case return directly*/
#include<stdio.h>

void Display(char ch)
{
	int icnt=0;
	if(ch>='A' && ch<='Z')
	{
		for(icnt=ch;icnt<='Z';icnt++)
		{
			printf("%c",ch);
			ch=ch+1;
		}
	}
	else if(ch>'a' && ch<='z')
	{
		for(icnt=ch;icnt>='a';icnt--)
		{
			printf("%c",ch);
			ch=ch-1;
		}
	}
	else
	{
		return;
	}
}
int main()
{
	char cValue='\0';
	
	printf("enter character:\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}