#include<iostream>
using namespace std;
// template<class T>
// void display(T t1)
// {
//     cout<<"displaying template :"<<t1<<endl;
// }
template<class x,class y>
// void display(x a,y b)
// {
//     cout<<"displaying template :"<<a<<"\t"<<b<<endl;
// }
void addition(x a,y b)
{
    cout <<"sum :"<<a+b<<endl;
}
int main()
{
    // display(200);
    // display(12.56);
    // display('G');
    // display('G',1.25);
    // display('x',25);
    // display(25,1.25);
    addition(25,33);
    addition(3.66,33);
    addition(3.66,'A');
 
}