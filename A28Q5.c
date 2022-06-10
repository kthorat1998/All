/* write a program which accept string from user and copy that character of that string into another
string by toggling case */

#include<stdio.h>

void StrCpuToggle(char *src,char *dest)
{
	while(*src!='\0')
	{
		if(*src>='A' && *src<='Z')
		{
			*src=*src+32;
		}
		else if(*src>='a' && *src<='z')
		{
			*src=*src-32;
		}
		*dest=*src;
		dest++;
		src++;
	}
	
	*dest='\0';
}
int main()
{
	
	char Arr[20];
	char Brr[20];
	
	printf("enter string:\n");
	scanf("%[^'\n']s",Arr);
	
	StrCpuToggle(Arr,Brr);
	
	printf("Toggle case:%s\n",Brr);
	
	return 0;
}