//write a program which accept string from user and display it in reverse order

#include<stdio.h>

void Reverse(char *str)
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
	
	printf("enter string:\n");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);
	
	printf("REverse string is:%s",Arr);
	return 0;
}