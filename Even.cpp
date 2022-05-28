#include<iostream>
#include<stdbool.h>
using namespace std;

class Check
{
	private:
	int iNo;
	
	public :
	void Accept()
	{
		cout<<"enter the number\n";
		cin>>this->iNo;
		if(iNo<0)
		{
			iNo=-iNo;
		}
	}
	
	bool CheckEven()
	{
		if((iNo%2)==0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
int main()
{
	int iValue=0;
	bool bRet=false;
	
	Check obj;
	obj.Accept();
	
	bRet=obj.CheckEven();
	if(bRet==true)
	{
		cout<<"given number is even"<<endl;
	}
	else
	{
		cout<<"given number is odd"<<endl;
	}
	
	
	return 0;
}