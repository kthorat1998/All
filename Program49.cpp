#include<iostream>
using namespace std;
class Number
{ private:
    int iNo;
	
	public:
	void Accept()  //setter
	{
		cout<<"enter the value";
		cin>>this->iNo;
	}
	
	void Display()  //getter
	{
		cout<<"value is:"<<this->iNo<<endl;
	}
     int Factorial()
    {
	int iFact=1;
	int icnt=0;
	for(icnt=1;icnt<=iNo;icnt++)
	{
		iFact=iFact*icnt;
		
	}
 	return iFact;
   }
};
int main()
{
	Number nobj1;
	Number nobj2;
	
	int iRet=0;
	
	nobj1.Accept();
	nobj1.Display();
	//cout<<nobj.iNo;
	iRet=nobj1.Factorial();
	cout<<"factorial is:"<<iRet<<endl;
	
	nobj2.Accept();
	nobj2.Display();
	
	iRet=nobj2.Factorial();
    cout<<"factorial is:"<<iRet<<endl;
	
	return 0;
}