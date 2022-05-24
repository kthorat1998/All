#include<stdio.h>

int main()
{
  int Arr[5];
  register int icnt=0;
  printf("enter element\n");
  for(icnt=0;icnt<5;icnt++)
  {
	  scanf("%d",&Arr[icnt]);
  }
 /* scanf("%d",&Arr[0]);
  scanf("%d",&Arr[1]);
  scanf("%d",&Arr[2]);
  scanf("%d",&Arr[3]);
  scanf("%d",&Arr[4]);
  */
  printf("elements of array are:\n");
   for(icnt=0;icnt<5;icnt++)
  {
	  printf("%d\n",Arr[icnt]);
  }
 /* printf("%d\n",Arr[0]);
   printf("%d\n",Arr[1]);
   printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]); 
	printf("%d\n",Arr[4]);
	*/
	return 0;
}