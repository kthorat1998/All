#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
	
	private:
	PNODE head;
	int iCount;
	
	public:
	SinglyLL();
	
	void InsertFirst(int iNo);
	void InsertLast(int iNo);
	void InsertAtPos(int iNo,int iPos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int iPos);
	void Display();
	int CountNode();
	
};
SinglyLL::SinglyLL()
	{
		head=NULL;
        iCount=0;
	}
	
	void SinglyLL:: InsertFirst(int iNo)
	{
		PNODE newn=new node;
		
		newn->data=iNo;
		newn->next=NULL;
	if(iCount==0)
	{
		head=newn;
	}
	else 
	{
		newn->next=head;
		head=newn;
	}
	iCount++;
		
	}
	void SinglyLL::InsertLast(int iNo)
	{
		PNODE newn=new node;
		PNODE temp=head;
		newn->data=iNo;
		newn->next=NULL;
		if(iCount==0)
		{
			head=newn;
		}
		else
		{
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
		}
		iCount++;
		
	}
	void SinglyLL::InsertAtPos(int iNo,int iPos)
	{
		if((iPos<1)||(iPos>iCount+1))
		{
			cout<<"Invalid POsition";
			return ;
			
		}
		else if(iPos==1)
		{
			InsertFirst(iNo);
		}
		else if(iPos==iCount+1)
		{
			InsertLast(iNo);
		}
		else
		{
			int  icnt=0;
			PNODE newn=new node;
			PNODE temp=head;
			newn->data=iNo;
			newn->next=NULL;
			for(icnt=1;icnt<(iPos-1);icnt++)
			{
				temp=temp->next;
			}
			newn->next=temp->next;
			temp->next=newn;
			
			iCount++;
			
		}
	}
	void SinglyLL::DeleteFirst()
	{
		PNODE temp=head;
		if(iCount==0)
		{
			return;
		}
		else
		{
			head=temp->next;
			delete(temp);
		}
		iCount--;
	}
	void SinglyLL::DeleteLast()
	{
		PNODE temp=head;
		if(iCount==0)
		{
			return;
		}
		else if(iCount==1) 
		{
			delete(head);
			head=NULL;
		}
		else
		{
			while(temp->next->next!=0)
			{
				temp=temp->next;
			}
			delete(temp->next);
			temp->next=NULL;
		}
		iCount--;
	}
	void SinglyLL::DeleteAtPos(int iPos)
	{
		if((iPos<1)||(iPos>iCount))
		{
			cout<<"Invalid Position"<<endl;
			return ;
		}
		else if(iPos==1)
		{
			DeleteFirst();
		}
		else if(iPos==iCount)
		{
			DeleteLast();
		}
		else
		{
			PNODE temp=head;
		    PNODE tempDelete=NULL;
			int icnt=0;
			for(icnt=1;icnt<(iPos-1);icnt++)
			{
				temp=temp->next;
			}
			tempDelete=temp->next;
			temp->next=temp->next->next;
			delete(tempDelete);
			
		}
	}
	void SinglyLL::Display()
	{
		PNODE temp=head;
		cout<<"data from linked list is:"<<endl;
		while(temp!=0)
		{
			cout<<"|"<<temp->data<<"|->";
			temp=temp->next;
		}
		cout<<endl;
	}
	int SinglyLL::CountNode()
	{
		return iCount;
	}
int main()
{
	int iRet=0;
	SinglyLL obj;
	
	obj.InsertFirst(101);
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.Display();
	 iRet=obj.CountNode();
	cout<<"Number of nodes are:"<<iRet<<endl;
	
	obj.InsertFirst(1);
	obj.Display();
	 iRet=obj.CountNode();
	cout<<"Number of nodes are:"<<iRet<<endl;
	
	obj.InsertLast(111);
	obj.InsertLast(121);
	obj.Display();
	 iRet=obj.CountNode();
	cout<<"Number of nodes are:"<<iRet<<endl;


    obj.InsertAtPos(75,3);
	obj.Display();
	 iRet=obj.CountNode();
	cout<<"Number of nodes are:"<<iRet<<endl;
	
	
	obj.DeleteFirst();
	obj.Display();
	 iRet=obj.CountNode();
	cout<<"Number of nodes are:"<<iRet<<endl;
	
	obj.DeleteLast();
	obj.Display();
	 iRet=obj.CountNode();
	cout<<"Number of nodes are:"<<iRet<<endl;
	
	obj.DeleteAtPos(4);
	obj.Display();
	 iRet=obj.CountNode();
	cout<<"Number of nodes are:"<<iRet<<endl;
	return 0;
}
