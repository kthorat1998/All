#include<stdio.h>
#include<stdlib.h>

struct node
{
    float data;           
    struct node *next;  
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, float no)
{
   
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)   
    {
        *head = newn;
    }
    else        
    {
        newn->next = *head;
        *head = newn;
    }
}

float Sum(PNODE head)
{
	float fSum=0.0;
	while(head!=NULL)
	{
		fSum=fSum+head->data;
		head=head->next;
	}
	return fSum;
}

float Average(PNODE head)
{   float fSum=0.0f;
	float Avg=0.0f,iCount=0;
	while(head!=NULL)
	{
		iCount++;
		fSum=fSum+head->data;
		head=head->next;
	}
	 Avg=fSum/iCount;
	 return Avg;
}
void Display(PNODE head)
{
    printf("Elements from linked list are : \n");

    while(head != NULL)
    {
        printf("| %f |-> ",head->data);
        head = head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt = 0;

    while(head != NULL)
    {
        iCnt++;
        head = head -> next;
    }
    return iCnt;
}

int main()
{
    float fRet = 0.0;
    PNODE first = NULL;

    InsertFirst(&first,121.3);    
    InsertFirst(&first,111.11);    
    InsertFirst(&first,101.12);    
    InsertFirst(&first,51.13);
    InsertFirst(&first,21.04);
     InsertFirst(&first,11.33);
     InsertFirst(&first,1.4);
	 
    Display(first);    

    fRet = Count(first);
    printf("Number of nodes are  : %f\n",fRet);

    fRet=Sum(first);
	printf("Summation of data is:%f\n",fRet);
	
   
     fRet=Average(first);
	printf("Average of data is:%d\n",fRet);
    

    return 0;
}