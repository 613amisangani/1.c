#include<iostream>
using namespace std;
class Base
{
   public:
   virtual void hello() =0;
};
class  Derived : public Base
{
    public:
    void hello()
    {
        cout<<"derived class hello"<<endl;
    }
};
int main()
{
    Base *p;
    Derived d;

    p = &d;
    p -> hello();
}