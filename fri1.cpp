#include<iostream>
using namespace std;
class box
{
    friend box add(box,box);
    int l,b,h;
    public:
    void setdata(int x,int y,int z)
    {
        l = x,b = y,h = z;
    }
    int getvolume()
    {
    return l*b*h;
    }
    
};
box add(box m,box n)
{
    box t;
    t.l = m.l+n.l;
    t.h = m.h+n.h;
    t.b = m.b+n.b;
    return t;
}
int main()
{
    box a,b,c;
    a.setdata(2,2,2);
    cout<<"volume of box a is :"<<a.getvolume()<<endl;
    b.setdata(3,3,3);
    cout<<"volume of box b is :"<<b.getvolume()<<endl;

    c = add(a,b);
    cout<<"volume of box c is :"<<c.getvolume()<<endl;
}