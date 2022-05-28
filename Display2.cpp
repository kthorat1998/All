#include<iostream>
using namespace std;

class Pattern
{
	private:
	int iNo;
	
	public :
	
	
	void Accept()
	{
		cout<<"enter the number:"<<endl;
		cin>>this->iNo;
		
	}
	void Display()
	{
		int icnt=0;
		for(icnt=1;icnt<=iNo;icnt++)
		{
			cout<<icnt<<"\t";
		}
	}
};
int main()
{
	  Pattern pobj;

	  pobj.Accept();
	  pobj.Display();
	  
	return 0;
}