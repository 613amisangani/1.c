#include <iostream>
using namespace std;
int main()
{
  float term = 0.5;
  int n,i,j=1,r=0;
  cout << "enter value for:";
  cin >> n;
  for(i=1;i<=n;i++)
  {
    cout << "\n"<<term ;
    term += 0.5*(1+r);
    r += 2;
  }
  return 0;
}