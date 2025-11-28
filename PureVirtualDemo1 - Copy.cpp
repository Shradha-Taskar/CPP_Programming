#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        int addition (int a, int b)   //concrete
        {
            return a+b;
        }
        virtual int subrtraction (int a, int b) = 0;   // abstract
        
};

class Derived : public Base     // ERROR
{
    int x;

};
int main()
{

    Base *bp = new Derived();                 // upcasting
    
    return 0;
}
