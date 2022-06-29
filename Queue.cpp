#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node*next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Queue
{
	public :
	PNODE head;
	int iCount;
	
    Queue();
	void Enqueue(int);  //insertlast
	void Dequeue();  //Deletefirst
	void Display();
	int CountNode();	
};
Queue::Queue()
{
	head=NULL;
	iCount=0;
}

void Queue::Enqueue(int iNo) //insertLAST 
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
		PNODE temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
	  
	  iCount++;
}
void Queue::Dequeue()  //delete first
{
	if(iCount==0)
	{
		cout<<"Stack is empty"<<endl;
		return ;
	}
	int no;
	no=head->data;
	PNODE temp=head;
	head=head->next;
	delete temp;
	
	iCount--;
	cout<<"Removed element is:"<<no<<endl;
}

void Queue::Display()
{
	PNODE temp=head;
	while(temp!=NULL)
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}
	cout<<endl;
}

int Queue::CountNode()
{
	return iCount;
}

int main()
{
	Queue obj;
	
	obj.Enqueue(101);
	obj.Enqueue(51);
	obj.Enqueue(21);
	obj.Enqueue(11);
	
	obj.Display();
	int iRet=obj.CountNode();
	cout<<"Number of node in Queue are:"<<iRet<<endl;
	
	
	obj.Dequeue();
	obj.Dequeue();
	
	obj.Display();
	iRet=obj.CountNode();
	cout<<"Number of node in Queue are:"<<iRet<<endl;
	
	return 0;
}