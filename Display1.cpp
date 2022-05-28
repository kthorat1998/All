
#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;        

    public:
        
        void Accept()       // Setter
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }

        void Display()      // Getter
        {
           int icnt=0;
		   for(icnt=1;icnt<=iNo;icnt++)
		   {
			   cout<<"*\t";
		   }
        }   
};

int main()
{
    Number nobj;

    nobj.Accept();
    nobj.Display();

    

    return 0;
}