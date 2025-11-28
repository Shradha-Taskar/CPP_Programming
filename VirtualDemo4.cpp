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
        virtual void sun()
        {
            cout<<"Inside Base sun\n";
        }
        virtual void bun()
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

    cout<<sizeof(Base)<<"\n";                //16
    cout<<sizeof(Derived)<<"\n";            //20
    Base *bp = new Derived();                 // upcasting
    
    /* bp->fun();                 // Base Fun
    bp->gun();                 // Base gun
    bp->sun();                 // Base sun
    //bp->run();                 // error
    //bp->mun();                 // error
    bp->bun();                 // Base bun */

    return 0;
}
