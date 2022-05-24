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
		int ino1=0;
		int ino2=0;
	}
	komal(int a,int b)
	{
		cout<<"inside paramterised constructor\n";
		int ino1=a;
		int ino2=b;
		
	}
	~komal()
	{
		cout<<"inside destructor\n";
	}

int addition(int ino1,int ino2)
{
	int ians=0;
	ians=ino1+ino2;
	return ians;
}
int substraction(int ino1,int ino2)
{
	int ians=0;
	ians=ino1-ino2;
	return ians;
	
}
};
int main()
{
	int ivalue1=0,ivalue2=0,iret=0;
	
	cout<<"enter the number\n";
	cin>>ivalue1;
	
	cout<<"enter the second number";
	cin>>ivalue2;
	
	komal obj2(ivalue1,ivalue2);
	
	iret=obj2.addition(ivalue1,ivalue2);
	cout<<"addition is:\n"<<iret;
	
	iret=obj2.substraction(ivalue1,ivalue2);
	cout<<"substraction is:\n"<<iret;
	cout<<"sizeof(komal)%d"<<"\n";
	
	return 0;
}
