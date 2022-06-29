#include<stdio.h>

void Display(char *str)
{
	if(*str!='\0')
	{
		
		printf("%s ",str);
	    Display(str+1);//tail recurssion 
	}
}
int main()
{
	char Arr[20];
	
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	
    Display(Arr);//Display(920);
	return 0;
}