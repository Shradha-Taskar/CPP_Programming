#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void fun()
        {
            cout<<"Inside Base Fun \n";
        }
        void gun()
        {
            cout<<"Inside Base gun \n";
        }
        void sun()
        {
            cout<<"Inside Base sun\n";
        }
        void bun()
        {
            cout<<"Inside Base bun \n";
        }
        
};

class Derived : public Base
{
    int x;
        void gun()
        {
            cout<<"Inside Derived gun \n";
        }
        void sun()
        {
            cout<<"Inside derived sun\n";
        }
        void run()
        {
            cout<<"Inside derived \n";
        }
        void mun()
        {
            cout<<"Inside Derived mun \n";
        }

};
int main()
{
    Base *bp1 = new Base();                    // no casting
    Derived *dp1 = new Derived();              // no casting
    Base *bp2 = new Derived();                 // upcasting
    Derived *dp2 = new Base();                 // Down casting

    return 0;
}
