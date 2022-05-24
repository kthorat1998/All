#include<iostream>
using namespace std;
class komal
{
	public:
	int ino1;
	int ino2;
	komal()
	{
		cout<<"inside default constructor\n";
		ino1=0;
		ino2=0;
	}
	komal(int a,int b)
	{
		cout<<"inside parametrised consturctor\n";
		ino1=a;
		ino2=b;
		
	}
    ~komal()
	{
		cout<<"inside destructor\n";
	}
	
	int addition()
	{
		int ians=0;
		ians=ino1+ino2;
		return ians;
	}
};
int main()
{
	int ivalue1=0,ivalue2=0,iret=0;
	cout<<"enter first no\n";
	cin>>ivalue1;
	cout<<"enter second no\n";
	cin>>ivalue2;
	
	komal obj2(ivalue1,ivalue2);
	iret=obj2.addition();
	cout<<"addition is:"<<iret<<"\n";
	
	return 0;
}