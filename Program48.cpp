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
	Number nobj;
	
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();
	//cout<<nobj.iNo;
	iRet=nobj.Factorial();
	
	cout<<"factorial is:"<<iRet<<endl;
	
	return 0;
}