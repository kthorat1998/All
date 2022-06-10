//write aprogram which accept string from user reverse that string in place

#include<stdio.h>

int strRevX(char *str)
{
	char *start=str;
	char *end=str;
	char temp;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
}
int main()
{
	char Arr[20];
	char cValue='\0';
	int iRet=0;
	
	printf("enter string:\n");
	scanf("%[^'\n']s",Arr);

    strRevX(Arr);
	
	printf("reverse string is:%s\n",Arr);
	return 0;
}