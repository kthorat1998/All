#include<iostream>
using namespace std;

class Factor
{
	private:
	int iNo1;
	
	public:
	void Accept()
	{
		cout<<"enter the number"<<"\n";
		cin>>this->iNo1;
		if(iNo1<0)
		{
			iNo1=-iNo1;
		}
	}
	void DisplayFactor()
	{ int icnt=0;
		for(icnt=1;icnt<iNo1;icnt++)
		{
			if((iNo1%icnt)==0)
			{
				cout<<icnt<<"\t";
			}
		}
		cout<<"\n";
	}
	int CountFactor()
	{ int icnt=0,iCountFact=0;
		for(icnt=1;icnt<=(iNo1<2);icnt++)
		{
			if((iNo1%icnt)==0)
			{
				iCountFact++;
			}
			
		}
		return iCountFact;
		
	}
};
int main()
{
	int iRet=0;
   Factor fobj;
   fobj.Accept();
   fobj.DisplayFactor();
   iRet=fobj.CountFactor();
   cout<<"number of factor are:\n"<<iRet;
}