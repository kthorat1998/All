#include<iostream>
using namespace std;

class Summation
{ 
   public:
   int iNo1;
   int iNo2;
   
	Summation(int a,int b)
	{
		iNo1=a;
	    iNo2=b;
	}
	
	~Summation()
	{
		cout<<"inside destructor\n";
	}
int Addition()
{
	int ians=0;
	ians=iNo1+iNo2;
	return ians;
}
};
int main()
{
	 
	int iValue1=0,iValue2=0,iRet=0;
	
	cout<<"Enter first number"<<"\n";
	cin>>iValue1;
	
	cout<<"Enter second number"<<"\n";
	cin>>iValue2;
	
	Summation sobj(iValue1,iValue2);
	
	iRet=sobj.Addition();
	
	cout<<"Addition is:"<<iRet<<"\n";
	
	return 0;
}