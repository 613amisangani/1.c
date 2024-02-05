#include<iostream>
using namespace std;
class test
{
   public:
   void hello(int a)
   {
    cout<<"value of a is :"<<a<<endl;
   }
   void hello(int l,int h)
   {
    cout<<"product of a and b is :"<<l*h<<endl;
   }
   void hello(int a,int b,int c)
   {
    cout<<"addition of a and b  and c is :"<<a+b+c<<endl;                                          
   }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            

};
int main()
{
    test t;
    t.hello(11,11);
    t.hello(11,22,33);
}