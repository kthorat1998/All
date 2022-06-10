//write  program which accept input from user and display only digit from that string

#include<stdio.h>

void Display(char *str)
{
	printf("digit from string are:");
	while(*str!='\0')
	{
		if(*str>='0' && *str<='9')
		{
			printf("%c",*str);
		}
		str++;
	}
}
int main()
{
	char Arr[20];
	
	printf("enter string:\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}