#include<iostream>
using namespace std;
class bank
{
  int bal;
  string name;
  public:
  void setdata(int bal,string name);
  void getdata()
  {
    cout<<"balance is :"<<bal<<endl;
    cout<<"name is :"<<name<<endl;
  }
};
void bank :: setdata(int bal,string name)
{
    this->bal = bal;
    this->name = name;
}
int main()
{
    bank b;
    b.setdata(1000,"hello");
    b.getdata();
}
