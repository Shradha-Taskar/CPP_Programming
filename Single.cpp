#include<iostream>
using namespace std;

class Base
{
    public: 
        int i,j;
        void fun()
        {
            cout<<"Inside base Fun \n";
        }

};

class Derived : public Base
{
    public:
        int x;

        void Gun(
            {
                cout<<"Inside Derived Gun \n";
            }
        )
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"sizeof Base class object"<<sizeof(bobj)<<"\n";
    cout<<"sizeof Derived class object"<<sizeof(dobj)<<"\n";
    return 0;

}