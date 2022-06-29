#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node*next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyCLL
{
	private:   //Characteristics
	PNODE Head;
	PNODE Tail;
	
	public:  //behaviours
	SinglyCLL();
	
	void InsertFirst(int no);
	void InsertLast(int no);
	void InsertAtPos(int no,int Pos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int no,int Pos);
	void Display();
	int Count();
};
SinglyCLL::SinglyCLL()
{
		Head=NULL;
		Tail=NULL;
}

void SinglyCLL::InsertFirst(int no)
	{
		PNODE newn=NULL;
		
		newn=new NODE;
		
		newn->data=no;
		newn->next=NULL;
		
		if((Head==NULL)&&(Tail==NULL))  //if LL is empty
		{
			Head=newn;
			Tail=newn;
		}
		else  //if LL contain atleast one node 
		{
			newn->next=Head;
			Head=newn;
		}
		Tail->next=Head;
	}
void SinglyCLL::InsertLast(int no)
	{PNODE newn=NULL;
		
		newn=new NODE;
		
		newn->data=no;
		newn->next=NULL;
		
		if((Head==NULL)&&(Tail==NULL))  //if LL is empty
		{
			Head=newn;
			Tail=newn;
		}
		else  //if LL contain atleast one node 
		{
			Tail->next=newn;
			Tail=newn;
		}
		Tail->next=Head;
		
	}
void SinglyCLL::InsertAtPos(int no,int Pos)
	{
		int iSize=Count();
		
		if((Pos<1)||(Pos>(iSize+1)))
		{
			cout<<"position inValid";
			return;
		}
		if (Pos==1)
		{
			InsertFirst(no);
		}
		else if(Pos==(iSize+1))
		{
			InsertLast(no);
		
		}
		else 
		{
			PNODE newn=NULL;
		
		newn=new NODE;
		
		newn->data=no;
		newn->next=NULL;
		
			PNODE temp=Head;
			int icnt=0;
			for(icnt=1;icnt<(Pos-1);icnt++)
			{
				temp=temp->next;
			}
			newn->next=temp->next;
			temp->next=newn;
		}
	}
void SinglyCLL::DeleteFirst()
	{
		
	if((Head==NULL)&&(Tail==NULL))  //LL is empty
	{
		return;
	}
    else if(Head==Tail)
	{
		delete Head;
		Head=NULL;
		Tail=NULL;
	}	
   else
    {
	  Head=Head->next;
	  delete(Head->next);
	  
	  Tail->next=Head;
    }	
	}
void SinglyCLL::DeleteLast()
	{
		if((Head==NULL)&&(Tail==NULL))  //LL is empty
	{
		return;
	}
    else if(Head==Tail)
	{
		delete Head;
		Head=NULL;
		Tail=NULL;
	}	
   else
    {
	  PNODE temp=Head;
	  while(temp!=Tail)
	  {
		  temp=temp->next;
	  }
	  delete Tail;
	  Tail=temp;
	  temp->next=Head;
    }	
	}
void SinglyCLL::DeleteAtPos(int no,int Pos)
	{
		int iSize=Count();
		
		if((Pos<1)||(Pos>iSize))
		{
			cout<<"position inValid";
			return;
		}
		if (Pos==1)
		{
			DeleteFirst();
		}
		else if(Pos==iSize)
		{
			DeleteLast();
		
		}
		else 
		{
			PNODE temp1=Head;
			PNODE temp2=temp1->next;
			int icnt=0;
			for(icnt=1;icnt<(Pos-1);icnt++)
			{
				temp1=temp1->next;
			}
			temp1->next=Tail;
			delete temp2;
		}
	}
void SinglyCLL::Display()
	{
		PNODE temp=Head;
	if((Head==NULL)&&(Tail==NULL))  //LL is empty
	{
		return;
	}		
		do
		{
			cout<<"|"<<temp->data<<"|->";
			temp=temp->next;
			
		}
		while(temp!=Head);
		
		cout<<endl;
	}
int SinglyCLL::Count()
	{  int icnt=0;
	PNODE temp=Head;
	if((Head==NULL)&&(Tail==NULL))  //LL is empty
	{
		return 0;
	}		
		do
		{
			icnt++;
			temp=temp->next;
			
		}
		while(temp!=Head);
		
		
		return icnt;
	}
int main()
{  int iRet=0;
	SinglyCLL obj;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.InsertLast(151);
	obj.InsertLast(201);
	
	obj.Display();
	iRet=obj.Count();
	cout<<"number of nodes are:"<<iRet<<endl;
	
	obj.InsertAtPos(75,4);
	obj.Display();
	iRet=obj.Count();
	cout<<"number of nodes are:"<<iRet<<endl;
	
	obj.DeleteAtPos(75,4);
	obj.Display();
	iRet=obj.Count();
	cout<<"number of nodes are:"<<iRet<<endl;
	return 0;
}