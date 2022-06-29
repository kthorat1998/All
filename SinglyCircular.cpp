#include<iostream>

using namespace std;

struct node
{
	int data;
	struct node *next;

};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglycLL
{
	
	private:
	PNODE head;
	PNODE tail;
    int iCount;
	
	public:
	SinglycLL();
	
	void InsertFirst(int iNo);
	void InsertLast(int iNo);
	void InsertAtPos(int iNo,int iPos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int iPos);
	void Display();
	int CountNode();
	
};
SinglycLL::SinglycLL()
	{
		head=NULL;
		tail=NULL;
		iCount=0;
	}
	
	void SinglycLL:: InsertFirst(int iNo)
	{
		PNODE newn=new node;
		newn->data=iNo;
		newn->next=NULL;
		
		if(iCount==0)
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
		iCount++;
	}
	void SinglycLL::InsertLast(int iNo)
	{
		PNODE newn=new node;
		newn->data=iNo;
		newn->next=NULL;
		
		if(iCount==0)
		{
			head=newn;
			tail=newn;
		}
		else
		{
			
			tail->next=newn;
			tail=newn;
			newn->next=head;
		}
		tail->next=head;
		iCount++;
	}
	void SinglycLL::InsertAtPos(int iNo,int iPos)
	{
		if((iPos<1)||(iPos>iCount+1))
		{
			cout<<"Invalid Position";
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
		tail->next=head;
	}
	void SinglycLL::DeleteFirst()
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
	tail->next=head;
		iCount--;
	}
	void SinglycLL::DeleteLast()
	{
		PNODE temp=head;
		if(iCount==0)
		{
			return;
		}
		else if(iCount==1) 
		{
			delete(head);
			tail=head;
		}
		else
		{
			while(temp->next!=tail)
			{
				temp=temp->next;
			}
			delete(tail);
			tail=temp;
			
		}
		tail->next=head;
		iCount--;
	}
	void SinglycLL::DeleteAtPos(int iPos)
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
	void SinglycLL::Display()
	{
		PNODE temp=head;
		while(temp!=tail)
		{
			cout<<"|"<<temp->data<<"|->";
			temp=temp->next;
		}
		 cout<<"|"<<temp->data<<"|-> ";
		cout<<endl;
	}
	int SinglycLL::CountNode()
	{
		return iCount;
	}
int main()
{ int iRet=0;
	SinglycLL obj;
	
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
