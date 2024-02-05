#include<iostream>
using namespace std;
class abc //single inheritance
{
    public:
    void setdata()
    {
        cout<<"constructor is called...."<<endl;
    }
};
class bank : public abc //hierarachical inheritance
{
    public:
    void getdata()
    {
        cout<<"hello hii...."<<endl;
    }

};
int main()
{
    abc d;
    bank c;
    d.setdata();
    c.getdata();
}