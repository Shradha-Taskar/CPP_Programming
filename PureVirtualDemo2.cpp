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

class Derived : public Base    
{
    int x;

    int subrtraction (int a, int b)   // Concrete
    {
        return a-b;
    }
    int multiplication (int a, int b)   // Concrete
    {
        return a*b;
    }

};
int main()
{

    Base *bp = new Derived();                 // upcasting

    int iRet = 0;
    iRet = bp -> addition(11,10);       // 21
    cout<<iRet<<"\n";
    
    iRet = bp -> subrtraction(11,10);   // 1
    cout<<iRet<<"\n";

    //  iRet = bp -> multiplication(11,10); // Error
    
    return 0;
}
