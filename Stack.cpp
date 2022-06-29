#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node*next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Stack
{
	public :
	PNODE head;
	int iCount;
	
    Stack();
	void push(int);  //insertFirst
	void pop();  //DeleteLast
	void Display();
	int CountNode();	
};
Stack::Stack()
{
	head=NULL;
	iCount=0;
}

void Stack::push(int iNo)  //InsertFirst(int)=insertfirst
{
	PNODE newn=new node;
	newn->data=iNo;
	newn->next=NULL;
	
	  newn->next=head;
	  head=newn;
	  iCount++;
}
void Stack::pop()//delete first=delete last
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

void Stack::Display()
{
	PNODE temp=head;
	while(temp!=NULL)
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}
	cout<<endl;
}

int Stack::CountNode()
{
	return iCount;
}

int main()
{
	Stack obj;
	
	obj.push(101);
	obj.push(51);
	obj.push(21);
	obj.push(11);
	
	obj.Display();
	int iRet=obj.CountNode();
	cout<<"Number of node in Stack are:"<<iRet<<endl;
	
	
	obj.pop();
	obj.pop();
	
	obj.Display();
	iRet=obj.CountNode();
	cout<<"Number of node in Stack are:"<<iRet<<endl;
	
	return 0;
}