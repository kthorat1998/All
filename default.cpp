#include<iostream>
using namespace std;

float area(float  fradius,float pi=3.14)
{
	float fans=0;
	fans=pi*fradius*fradius;
	return fans;
	
}
int main()
{
	float fret=0;
	fret=area(10.11,10.2);
	cout<<fret<<"\n";
	
	fret=area(10.11);
	cout<<fret<<"\n";
	
	return 0;
}