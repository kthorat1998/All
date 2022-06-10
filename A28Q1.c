/* write a program which accept 2 string from user and copy that character of string into another string
in reverse order*/

#include<stdio.h>

void strCpyRev(char*src,char*dest)
{
	
    char *end=src;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(*end!='\0')
	{
		*dest=*end;
		dest++;
		end--;
	}
	*end='\0';
	
}
int main()
{
	char Arr[50]="komal";
	char Brr[30];
	

     strCpyRev(Arr,Brr);
	 
	 printf("reverse string is:%s",Brr);
	 
	return 0;
}