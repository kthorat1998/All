#include<iostream>
using namespace std;


class ArrayX
{
	
	public:
	int *Arr;
	int iSize;
	
	ArrayX(int Value)
	{
		iSize=Value;
		Arr=new int[iSize];
	}
	~ArrayX()
	{
		delete[]Arr;
	}
	void Accept()
	{
		int icnt=0;
		cout<<"values of array:";
		for(icnt=0;icnt<iSize;icnt++)
		{
			cin>>Arr[icnt];
		}
	}
	void Display()
	{int icnt=0;
		cout<<"values from array:";
		for(icnt=0;icnt<iSize;icnt++)
		{
			cout<<Arr[icnt]<<endl;
		}
	}
	int Maximum()
	{int icnt=0;
		int Max=Arr[0];
		for(icnt=0;icnt<iSize;icnt++)
		{
			if(Max<Arr[icnt])
			{
				Max=Arr[icnt];
				
			}
		}
		return Max;
		
	}
};
int main()
{
	int iRet=0;
	ArrayX obj1(5);
	obj1.Accept();
	obj1.Display();
	
	iRet=obj1.Maximum();
	cout<<"maximum is:"<<iRet<<endl;
	
	return 0;
}