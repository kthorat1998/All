//convert string into lower case

#include<stdio.h>

void strlwrX(char *str)
{
	while(*str!='\0')
	{
	if(*str>='A' && *str<='Z')
	{
		*str=*str+32;
		
	}
	str++;
	}
}
int main()
{
	char Arr[20];
	
	printf("enter string:");
	scanf("%[^'\n']s",Arr);
	
	strlwrX(Arr);
	
	printf("Modified string is %s",Arr);
	return 0;
}