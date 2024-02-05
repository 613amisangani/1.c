#include<iostream>
using namespace std;
class test
{
  private:
  int a = 505;
  public:
  void hello()
  {
    cout <<"hello world"<<endl;
    cout <<"value of a:"<<a<<endl;
  }
};
int main()
{
 test t;
 t.hello();
}