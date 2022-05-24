#include<stdio.h>
void Display(int Arr[])
{  register int icnt=0;
   printf("elements of array are:\n");
   for(icnt=0;icnt<5;icnt++)
  {
	  printf("%d\n",Arr[icnt]);

  }
 
}
int main()
{
  int Brr[5];
  register int icnt=0;
  printf("enter element\n");
  for(icnt=0;icnt<5;icnt++)
  {
	  scanf("%d",&Brr[icnt]);
  }
   Display(Brr);
 
	return 0;
}