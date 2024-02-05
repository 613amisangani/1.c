#include<iostream>
using namespace std;
class base{
    protected :
    int a;
    public:
    void hello()
    {
        cout<<"hello"<<endl;
    }
};
class derived : public base
{
    public :
    void world()
    {
        hello();
        a=101;
        cout<<"world :"<<a<<endl;
    }
};
int main()
{
    derived d;
    d.world();
}