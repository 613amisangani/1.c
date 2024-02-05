#include<iostream>
using namespace std;
class box
{
    int l,b,h;
    public:
    void setdata(int x,int y,int z)
    {
        l=x , b=y , h=z;
    }
    int getvolume()
    {
        return l*b*h;
    }
    box operator++(int){
        box t;
        t.l = ++l;
        t.b = ++b;
        t.h = ++h;
        return t;
    }
};
int main()
{
    box a;
    a.setdata(2,2,2);
    cout<<"volume of box a is :"<<a.getvolume()<<endl;
    a++;
    cout<<"after increment volume of box a is :"<<a.getvolume()<<endl;
}