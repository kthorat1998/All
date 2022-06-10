//convert into toggle case


#include<stdio.h>

void strstoggleX(char *str)
{
	while(*str!='\0')
	{
	if(*str>='A' && *str<='Z')
	{
		*str=*str+32;
		
	}
	else if(*str>='a' && *str<='z')
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
	
	strstoggleX(Arr);
	
	printf("Modified string is %s",Arr);
	return 0;
}