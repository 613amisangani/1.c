#include<iostream>
using namespace std;
class base
{
  protected:
  int a;
  public:
  void seta()
  {
    cout <<"enter a:";
    cin>>a;
  }
};
class abc : public base
{
  protected:
  int b;
  public:
  void setb()
  {
    cout <<"enter b:";
    cin>>b;
  }
  void add()
  {
    cout<<"additional of a and b is :"<<a + b<<endl;
  }
};
class pqr : public base
{
  protected:
  int c;
  public:
  void setc()
  {
    cout <<"enter c:";
    cin>>c;
  }
  void product()
  {
    cout<<"additional of a and c is :"<<a * c<<endl;
  }
};
int main()
{
    abc a;
    a.seta();
    a.setb();
    a.add();

    pqr p;
    p.seta();
    p.setc();
    p.product();
}
