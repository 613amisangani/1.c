#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout << "enter a:";
  cin >> a >> b >> c;

 if((a>b)&&(a<c))
 {
    cout << "a is largest";
 }
 if((b>c)&&(b<a))
 {
    cout << " b is largest ";
 }
 if((c>a)&&(c<b))
 {
    cout << " c is largest";
 }
   
  return 0;
}