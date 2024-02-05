#include<iostream>
using namespace std;
class Box
{
    friend Box add(Box, Box);
    int l,b,h;
    public:
    void setdata(int x ,int y ,int z)
    {
        l = x, b = y, h = z;
    }
    int getvolume();
    
};
int Box ::getvolume(){
    return l*b*h;
}
Box add(Box m,Box n)
{
    Box t;
    t.l = m.l+n.l;
    t.h = m.h+n.h;
    t.b = m.b+n.b;
    return t;
}
int main()
{
    Box a,b,c;
    a.setdata(2,2,2);
    cout<<"volume of box a is :"<< a.getvolume() <<endl;
    b.setdata(3,3,3);
    cout<<"volume of box b is :"<< b.getvolume() <<endl;

    c = add(a,b);
    cout<<"volume of box c is :"<< c.getvolume() <<endl;
}