#include<iostream>
using namespace std;
class box
{
int l,b,h;
public:

  void setdata(int x,int y,int z)
  {
    l = x ,b = y  ,h = z ;
  }
  int getvolume()
  {
    return l*b*h;
  }
  box operator- (box &n)
  {
    box m;
    m.l = l -n.l;
    m.b = b -n.b;
    m.h = h -n.h;
    return m;
  }
    
};
int main()
{
    box t,z,a;
    t.setdata(4,4,4);
    cout<<"volume of box t is :"<<t.getvolume()<<endl;
    z.setdata(6,6,6);
    cout<<"volume of box z is :"<<z.getvolume()<<endl;
    a = t - z;
    cout<<"volume of box a is :"<<a.getvolume()<<endl;

}

