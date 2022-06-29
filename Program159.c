#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE head)
{ 
	if(head==NULL)
	{
		return;
	}
	else
	{
		if(head!=NULL)
		{
			printf("|%d|->",head->data);
			head=head->next;
			Display(head);//tail recurssion
		}
	}
	
}
int Count(PNODE head)
{
	int icnt=0;
	while(head!=NULL)
	{
		icnt++;
		head=head->next;
	}
	return icnt;
}
void InsertFirst(PPNODE head,int iNo)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=iNo;
	newn->next=NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}

int main()
{
	int iRet=0;
	
	PNODE first=NULL;
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	
	Display(first);
	iRet=Count(first);
	printf("number of node in linked list are:%d\n",iRet);
	return 0;
}