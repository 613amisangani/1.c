#include<iostream>
using namespace std;
class base1
{
  protected:
  int i=0;
  public:
  void seta()
  {
   char str1[20];
    gets( str1);
    while(str1[i]!='\0')
    {
      i++;
    }
  }
};
class base2
{
  protected:
  int j=0;
  public:
  void seta()
  {
   char str2[20];
    gets( str2);
   for(j=0;str[j]!='\0')
  }
};
class derived:public base1,public base2
{
  public:
  void getproduct()
  {
    cout<<"product of a and b is "<<a*b<<endl;
  }
};
int main()
{
    derived d;
    d.seta();
    d.setb();
    d.getproduct();
}