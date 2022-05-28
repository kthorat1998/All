#include<iostream>
using namespace std;

class Check
{
	private:
	int iNo;
	
	public:
	void Accept()
	{
		cout<<"enter the number"<<"\n";
		cin>>this->iNo;
		if(iNo<0)
		{
			iNo=-iNo;
		}
	}
	void DisplayClass()
	{
	if(iNo<35)
	{
		cout<<"Fail"<<"\n";
	}
	else if((iNo>=35)&&(iNo<50))
	{
		cout<<"Pass class"<<"\n";
	}
	else if((iNo>=50)&&(iNo<60))
	{
		cout<<"second class"<<"\n";
	}
	else if((iNo>=60)&&(iNo<70))
	{
		cout<<"first class"<<"\n";
	}
	else if(iNo>=70)
	{
		cout<<"first class with distinction"<<"\n";
	}
	}
};
int main()
{
	Check cobj;
	cobj.Accept();
	cobj.DisplayClass();
	
	return 0;
}