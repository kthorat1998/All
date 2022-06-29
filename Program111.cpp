#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node*next;
	
};

template<class T>
class SinglyLL
{
	public:
	struct node<T>*head;
	 T Count;
	
	SinglyLL();
	void InsertFirst(T);
	void InsertLast(T);
	void Display();
	int CountNode();
};
template<class T>
SinglyLL<T>::SinglyLL()
{
	head=NULL;
	Count=0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T No)
{
	struct node<T>*newn=NULL;
	
	newn=new node<T>;
	
	newn->data=No;
	newn->next=NULL;
	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		newn->next=head;
		head=newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T No)
{
	struct node<T>*newn=NULL;
	
	newn=new node<T>;
	
	newn->data=No;
	newn->next=NULL;
	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		struct node<T>*temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
	Count++;
}

template<class T>
void SinglyLL<T>::Display()
{
	cout<<"data from linkedlist are:"<<endl;
	
	struct node<T>*temp=head;
	while(head!=NULL)
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}
	cout<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
	return Count;
}
int main()
{
    
	SinglyLL<int>obj1;
	
	obj1.InsertFirst(101);
	obj1.InsertFirst(51);
	obj1.InsertFirst(11);
	obj1.InsertFirst(10);
	obj1.InsertFirst(1);
	
	obj1.Display();
	int iRet=obj1.CountNode();
	cout<<"number of nodes are:"<<iRet<<endl;
	
	SinglyLL<float>obj2;
	obj2.InsertFirst(4.1);
	obj2.InsertFirst(3.1);
	obj2.InsertFirst(2.1);
	obj2.InsertFirst(1.1);
	
	obj2.Display();
	float fRet=obj2.CountNode();
	cout<<"number of nodes are:"<<fRet<<endl;
	return 0;
}