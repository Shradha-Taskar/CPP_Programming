#include<iostream>
using namespace std;

class Base
{
    public: 
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Base()
        {
            i = 10; j = 20 ; k = 30;
        }
        void Fun()
        {
            cout<<i<<"\n";              // allowed
            cout<<j<<"\n";              // allowed
            cout<<k<<"\n";              // allowed
        }
    

};

class Derived : public Base
{
    public:
        void Display()
        {
            cout<<i<<"\n";                // allowed
            cout<<j<<"\n";                // Error
            cout<<k<<"\n";                // allowed
        }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n";            // allowed
    cout<<bobj.j<<"\n";            // Error
    cout<<bobj.k<<"\n";            // Error

    cout<<dobj.i<<"\n";             // allowed
    cout<<dobj.j<<"\n";             // Error
    cout<<dobj.k<<"\n";             // Error    

    dobj.Fun();                     // allowed
    dobj.Display();                 // allowed

    return 0;

}