#include<iostream>
using namespace std;

class Demo
{
    public:
        void Display()
        {
            cout<<"Inside display";
        }
};
int main()
{
    Demo dobj;
    cout<<sizeof(dobj);             // 1 byte

}
