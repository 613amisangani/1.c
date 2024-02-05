#include<iostream>
using namespace std;
class area{
    public:
    
    area(int l,int a)
    {
      cout<<"squre is :"<<l*a<<endl;
     }
   //  area(int c=12,int f)
    //{
      //  f=((9/5)*c+32);
       //cout<<"char is :"<<f<<endl;
    
};
int main()
{
  int l,a;
  cout << "Enter length :\t";
  cin >> l >> a;
 area(l,a); ;
}