#include<iostream>
using namespace std;
class test
{
 public:
 test()
 {
    cout<<"default constructor is called"<<endl;
 }
 test(int a)
 {
    cout<<"default constructor is called"<<endl;
    cout<<"value of a is "<<a<<endl;
 }

};
int main()
{
    test t(50),m ;
}
