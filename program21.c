#include<stdio.h>

void display(int ino)
 {
	 int icnt=0;
	 if(ino<0)
	 {
		 ino=-ino;
	 }
	/* for(icnt=1;icnt<=ino;icnt++)
	 {
		 printf("%d\n",icnt);
	 }*/
	 
	 icnt=1;
	 while(icnt<=ino)//2
	 {
		printf("%d\n",icnt); //4
		icnt++; //3
	 }
 }
int main()
{
	int ivalue=0;
	printf("enter the number\n");
	scanf("%d",&ivalue);
	display(ivalue);
	
	return 0;
}