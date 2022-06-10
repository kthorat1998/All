//Accept division of student  from user and depend on division display exam time
//there are 4 dividion in school A,B,C,D.Exam of division A at 7Am,B at 8:30 Am,C at 9:20 Am,
//D at 10:30 Am.

#include<stdio.h>

void DisplaySchedule(char ch)
{
	switch(ch)
	{
		case 'A':
		{
		printf("Exam of division A at 7 Am\n");
		break;
		}
		
		
		case 'B':
		{
		printf("Exam of division B at 8:30 Am\n");
			break;
		}
	
		
		case 'C':
		{
		printf("Exam of division C at 9:20\n");
		break;
		}
		
		
		case 'D':
		{
		printf("Exam of division D at 10:30 Am\n");
		break;
		}
		
	}
}
int main()
{
	char cValue='\0';
	
	printf("enter the division:\n");
	scanf("%c",&cValue);
	
	DisplaySchedule(cValue);
	
	return 0;
}