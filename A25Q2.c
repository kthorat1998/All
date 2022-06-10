//string convert  into upper case

#include<stdio.h>

void strupX(char *str)
{
	while(*str!='\0')
	{
		if(*str>='a' && *str<='z')
		{
			*str=*str-32;
		}
		str++;
	}
}
int main()
{
	char Arr[20];
	
	printf("enter string:");
	scanf("%[^'\n']s",Arr);
	
	strupX(Arr);
	
	printf("Modified string is:%s",Arr);
	return 0;
} 