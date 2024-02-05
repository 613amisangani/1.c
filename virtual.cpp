#include<iostream>
using namespace std;
class Base
{
   public:
   virtual void hello()
   {
    cout<<"base class hello"<<endl;
   }
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
    Base *p,b;
    Derived d;

    p = &b;
    p -> hello();

    p = &d;
    p -> hello();
}