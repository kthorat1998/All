#include<iostream>
using namespace std;

template<class T>
class ArrayX
{
	public:
	 T *Arr;
	int iSize;
	
	ArrayX(int Value);
	~ArrayX();
	void Accept();
	void Display();
	 T Maximum();	
};
template<class T>
ArrayX<T>::ArrayX(int Value)
	{
		iSize=Value;
		Arr=new T[iSize];
	}
	
template<class T>
ArrayX<T>::~ArrayX()
	{
		delete[]Arr;
	}
	
template<class T>
void ArrayX<T>::Accept()
	{
		int icnt=0;
		cout<<"values of array:";
		for(icnt=0;icnt<iSize;icnt++)
		{
			cin>>Arr[icnt];
		}
	}
	
template<class T>	
void ArrayX<T>::Display()
	{int icnt=0;
		cout<<"values from array:";
		for(icnt=0;icnt<iSize;icnt++)
		{
			cout<<Arr[icnt]<<endl;
		}
	}
	
template<class T>	
T ArrayX<T>::Maximum()
	{
		int icnt=0;
		 T Max=Arr[0];
		for(icnt=0;icnt<iSize;icnt++)
		{
			if(Max<Arr[icnt])
			{
				Max=Arr[icnt];
				
			}
		}
			return Max;
		
	}
int main()
{

	ArrayX<int>obj1(5);
	obj1.Accept();
	obj1.Display();
	
	int iRet=obj1.Maximum();
	cout<<"maximum is:"<<iRet<<endl;
	
	return 0;
}