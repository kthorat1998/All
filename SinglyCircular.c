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
	printf("data from linked list are:\n");

	if(head==NULL)
	{
		return;
	}
	else
	{
		while(head!=NULL)
		{
			printf("|%d|->",head->data);
			head=head->next;
		}
	}
	printf("NULL\n");
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
{   PNODE tail=NULL;
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=iNo;
	newn->next=NULL;
	
	if((head==NULL)&&(tail==NULL))
	{
		head=newn;
		tail=newn;
	}
	else
	{
		newn->next=head;
		head=newn;
		
	}
	tail->next=head;
}
void InsertLast(PPNODE head,int iNo)
{
	
}
void InsertAtPos(PPNODE head,int iNo,int iPos)
{
	
	int iSize=0,icnt=0;
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	
	iSize=Count(*head);
	
	if((iPos<1)&&(iPos>iSize+1))
	{
		printf("INvalid position:\n");
		return;
	}
	else if(iPos==1)
	{
		InsertFirst(head,iNo);
	}
	else if(Pos==(iSize+1))
	{
		InsertLast(head,iNo);
	}
	else
	{
		newn=(PNODE)malloc(sizeof(NODE));
	    newn->data=iNo;
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
void DeleteFirst(PPNODE head)
{
	
}
void DeleteLast(PPNODE head)
{
	
}
void DeleteAtPos(PPNODE head,int iPos)
{
	int iSize=0;

   PNODE temp=NULL;
   iSize=Count(*head);
   if((iPos<1)&&(iPos>iSize))
   {
	   printf("invalid position\n");
	   return ;
   }	
   else if(iPos==1)
   {
	   DeleteFirst(head);
   }
   else if(iPos==iSize)
   {
	   DeleteLast(head);
   }	
   else
   {
	   PNODE temp=NULL;
	   PNODE tempDelete=NULL;
	   temp=*head;
	   
	   int icnt=0;
	   for(icnt=1;icnt<(iPos-1);icnt++)
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
	
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	InsertFirst(&first,1);
	
	Display(first);
	iRet=Count(first);
	printf("number of node in linked list are:%d\n",iRet);
	
	/*InsertLast(&first,101);
	Display(first);
	iRet=Count(first);
	printf("number of node in linked list are:%d\n",iRet);
	
	InserAtPos(&first,33,2);
	Display(first);
	iRet=Count(first);
	printf("number of node in linked list are:%d\n",iRet);
	
	DeleteFirst(&first);
	Display(first);
	iRet=Count(first);
	printf("number of nodes are:\n%d ",iRet);
	
	DeleteLast(&first);
	Display(first);
	iRet=Count(first);
	printf("number of nodes are:\n%d ",iRet);
	
	DeleteAtPos(&first,3);
	Display(first);
	iRet=Count(first);
	printf("number of nodes are:\n%d ",iRet);
	*/
	return 0;
}