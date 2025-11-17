#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        int Addition(int A,int B)      //Concrete
        {
            return A+B;
        }
        virtual int Substraction(int A,int B)
        {
            return A-B;
        }
};


class Derived:public Base   //ERROR
{
    public:
        int x;
        
};

int main()
{ 
    Base *bp=new Derived();        //Upcasting

    return 0;

}