#include<iostream>
using namespace std;
class demo
{
	public:
	int i;
	private:
	int j;
	protected:
	int k;
	
};
class hello:public demo
{
	public:
	int x;
	private:
	int y;
	protected:
	int z;
	public:
	void fun()
	{
		cout<<k<<"\n";
	}
	
};
int main()
{
	cout<<sizeof(demo)<<"\n";
	cout<<sizeof(hello)<<"\n";
	demo dobj;
	cout<<dobj.i<<"\n";
	//cout<<dobj.j<<"\n";
	//cout<<dobj.k<<"\n";
	hello hobj;
	cout<<hobj.x<<"\n";
	//cout<<hobj.y<<"\n";
	//cout<<hobj.z<<"\n";
	cout<<hobj.i<<"\n";
	//cout<<hobj.j<<"\n";
	//cout<<hobj.k<<"\n";
	hobj.fun();
	return 0;
}