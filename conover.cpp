#include<iostream>
using namespace std;
class test{
    public:
    test()
    {
      cout<<"default constructor is called"<<endl;
    }
    test(int a)
    {
      cout<<"squre is :"<<a*a<<endl;
    }
    test(char a)
    {
      cout<<"char is :"<<a<<endl;
    }
    test(int a,int b)
    {
      cout<<"product is :"<<a*b<<endl;
    }
    test(int a,int b,int c)
    {
      cout<<"addition is :"<<a+b+c<<endl;
    }
};
int main()
{
  test a(15),b(11,22),c,d(1,2,3),e('s');
}