#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        
};

class Derived : public Base
{
    int x;
};
int main()
{
    cout<<sizeof(Base)<<"\n";      // 8 byte
    cout<<sizeof(Derived)<<"\n";   // 12 byte 

    return 0;
}
