//linear Singly linkedList
// InsertFirst,InsertLast,InsertAtPosition,DeleteFirst,DeleteLast,DeleteAtPosition
//Count,Display

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
typedef struct  node NODE;
typedef  struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE head)
{
	printf("data from linked list are:\n");
  while(head!=NULL)
  { printf("|%d|->",head->data);
	  head=head->next;
  }
  printf("NULL\n");
}
int Count(PNODE head)
{  int icnt=0;
	while(head!=NULL)
	{
		icnt++;
		head=head->next;
	}
	return icnt;
}
void InsertFirst(PPNODE head,int No)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=No;
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
void InsertLast(PPNODE head,int No)
{
	PNODE temp=NULL;
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=No;
	newn->next=NULL;
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		temp=*head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		
	}
}
void DeleteFirst(PPNODE head)
{  PNODE temp=NULL;
	if(*head==NULL)
	{
		return;
	}
	else
	{   temp=*head;
		*head=temp->next;
		free(temp);
	}
}
void DeleteLast(PPNODE head)
{
	PNODE temp=NULL;
	if(*head==NULL)
	{
		return;
	}
	else
	{   temp=*head;
     while(temp->next->next!=NULL)
	 {
		 temp=temp->next;
	 }
	 free(temp->next);
	 temp->next=NULL;
	}
}
void InsertAtPos(PPNODE head,int No,int Pos)
{  int size=0,icnt=0;
	PNODE temp=NULL;
	PNODE newn=NULL;
	
	size=Count(*head);
	if((Pos<1)||(Pos>(size+1)))
	{
		printf("Invalid position\n");
		return ;
	}
	else if(Pos==1)
	{
		InsertFirst(head,No);
	}
	else if(Pos==(size+1))
	{
		InsertLast(head,No);
	}
	else
	{
   newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=No;
	newn->next=NULL;
	temp=*head;
	for(icnt=1;icnt<(Pos-1);icnt++)
	{
		temp=temp->next;
	}
	newn->next=temp->next;
	temp->next=newn;
	
	}
}
void DeleteAtPos(PPNODE head,int Pos)
{int icnt=0,size=0;
	PNODE temp=NULL;
	PNODE tempDelete=NULL;
	size=Count(*head);
	if((Pos<1)||(Pos>size))
	{
		printf("invalid position\n");
		return;
	}
	else if(Pos==1)
	{
		DeleteFirst(head);
	}
	else if(Pos==size)
	{
		DeleteLast(head);
		
	}
	else
	{
		temp=*head;
		for(icnt=1;icnt<(Pos-1);icnt++)
		{
			temp=temp->next;
		}
		tempDelete=temp->next;
		temp->next=temp->next->next;
		free(tempDelete);
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
    printf("number of nodes in linked list:%d\n",iRet);
	
	InsertFirst(&first,1);
		
	Display(first);
	iRet=Count(first);
    printf("number of nodes in linked list:%d\n",iRet);
	
    InsertLast(&first,111);
		
	Display(first);
	iRet=Count(first);
    printf("number of nodes in linked list:%d\n",iRet);
	
	DeleteFirst(&first);
	Display(first);
	iRet=Count(first);
    printf("number of nodes in linked list:%d\n",iRet);
	
	DeleteLast(&first);
	Display(first);
	iRet=Count(first);
    printf("number of nodes in linked list:%d\n",iRet);
	
	InsertAtPos(&first,33,3);
	Display(first);
	iRet=Count(first);
    printf("number of nodes in linked list:%d\n",iRet);
	
	DeleteAtPos(&first,3);
	Display(first);
	iRet=Count(first);
    printf("number of nodes in linked list:%d\n",iRet);
	return 0;
}