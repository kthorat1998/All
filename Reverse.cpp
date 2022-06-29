#include<iostream>
using namespace std;
class Digit
{
	private:
	int iNo;
	
	public:
	void Accept()
	{
		cout<<"enter the number:"<<endl;
		cin>>this->iNo;
	}
	int Reverse()
	{
		int iRev=0,iDigit=0;
		
		while(iNo>0)
		{
			iDigit=iNo%10;
			iRev=iRev*10+iDigit;
			iNo=iNo/10;
			
		}
		return iRev;
	}
};
int main()
{
	int iRet=0;
	Digit dobj;
	dobj.Accept();
	iRet=dobj.Reverse();
	cout<<"reverse number are:"<<iRet;
	return 0;
}