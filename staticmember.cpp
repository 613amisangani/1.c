#include<iostream>
using namespace std;
class bank
{
    public:
    static int a;
    bank()
    {
       // cout<<"hello..........."<<endl;
        a++;
    }
   
};
int bank :: a;
int main()
{
   cout<<"init value of a is :"<<bank::a<<endl;
   bank b,a,s,d,f;
   cout<<"after value of a is :"<<bank::a<<endl;
}