#include<iostream>
using namespace std;

template<class T>
struct node
{
	T data;
	struct node*next;
	
};

template<class T>
class Queue
{
	public:
	struct node<T>*head;
	 int Count;
	
	 Queue();
	void Enqueue(T); 	//LnsertLast
	void Dequeue();     //Deletefirst
	void Display();
	int CountNode();
};
template<class T>
Queue<T>::Queue()
{
	head=NULL;
	Count=0;
}

template<class T>
void Queue<T>::Enqueue(T No)
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
void Queue<T>:: Dequeue()   //deletefirst
{
	T No;
	
	if(Count==0)
	{
		cout<<"Queue is empty"<<endl;
	   return;
	}
		No=head->data;
		struct node<T>*temp=head;
		head=head->next;
		delete temp;
	
	Count--;
	cout<<"Removed element is:"<<No<<endl;
}

template<class T>
void Queue<T>::Display()
{
	cout<<"data from Queue are:"<<endl;
	
	struct node<T>*temp=head;
	while(head!=NULL)
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}
	cout<<endl;
}

template<class T>
int Queue<T>::CountNode()
{
	return Count;
}
int main()
{
   Queue<int>obj1;
   
   obj1.Enqueue(11);
   obj1.Enqueue(21);
   obj1.Enqueue(51);
   obj1.Enqueue(101);
   obj1.Enqueue(111);
   obj1.Display();
   cout<<"Number of elemenet in Queue:"<<obj1.CountNode()<<endl;
   
   obj1.Dequeue();
   obj1.Dequeue();
   obj1.Dequeue();
    obj1.Display();
   cout<<"Number of elemenet in Queue:"<<obj1.CountNode()<<endl;
   
   obj1.Dequeue();
   obj1.Dequeue();
   obj1.Dequeue();
	return 0;
}