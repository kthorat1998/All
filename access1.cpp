#include<iostream>
using namespace std;
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
		 x=10;
		 y=20;
		 i=30;
	 }
	 void fun()
	 {
		 cout<<"inside fun\n";
		 cout<<i<<"\n";
		 cout<<y<<"\n";
		 gun();
	 }
	 private:
	 void gun()
	 {
		 cout<<"inside gun\n";
	 }
};
int main()
{
	demo obj;
	cout<<obj.x<<"\n";
	//cout<<obj.i<<"\n";
	//cout<<obj.y<<"\n";
	obj.fun();
	//obj.gun();
	cout<<sizeof(demo)<<"\n";
	
	return 0;
}