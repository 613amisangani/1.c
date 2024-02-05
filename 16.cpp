#include <iostream>
using namespace std;
int main()
{
  int a,b;
  cout << "enter a:";
  cin >> a ;
 if(a<=5000)
 {
    b = a+((a*0.8)+(a*0.20));
    cout <<  " value is: "<<b<<"";
 }
 if(a<=10000)
 {
    b = a+((a*0.12)+(a*0.30));
    cout <<  " value is: "<<b<<"";
 }
 if(a<=15000)
 {
    b = a+((a*0.15)+(a*0.40));
    cout <<  " value is: "<<b<<"";
 }
 else
 {
    b = a+((a*0.20)+(a*0.50));
    cout << " value is: "<<b<<"";
 }
   
  return 0;
}
 