#include<iostream>
using namespace std;
class Number
{
	public:
     int Factorial(int iNo)
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
	
	int iValue=0,iRet=0;
	
	cout<<"enter the number\n";
	cin>>iValue;
	
	iRet=nobj.Factorial(iValue);
	
	cout<<"factorial is:"<<iRet<<endl;
	
	return 0;
}