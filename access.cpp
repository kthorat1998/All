#include<iostream>
using namespace std;
//public private
class demo
{
	int i;
	public:
	int x;
	private:
	int y;
	public:
	demo()
	{
		x =10;
		y =20;
		i =30;
		
	}
	void fun()
	{
		cout<<"inside public fun\n";
		cout<<y;
		gun();
	}
	private:
	void gun()
	{
		cout<<"inside private gun\n";
		cout<<y;
	}
};
int main()
{
	demo obj;
	
	cout<<obj.x<<"\n";
	//cout<<obj.y<<"\n";
//	cout<<obj.i<<"\n";
	
	obj.fun();
	
	
	return 0;
}