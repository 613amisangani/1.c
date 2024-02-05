#include <iostream>
using namespace std;
int main()
{
  int a,b;
  cout << "enter a:";
  cin >> a ;
 if(a<=2500)
 {
    
    cout <<  " no taxes";
 }
 if(a<=5000)
 {
    b = (a*0.10);
    cout <<  " value is: "<<b<<"";
 }
 if(a<=10000)
 {
    b = (a*0.20);
    cout <<  " value is: "<<b<<"";
 }
 else
 {
    b = (a*0.30);
    cout << " value is: "<<b<<"";
 }
   
  return 0;
}
 