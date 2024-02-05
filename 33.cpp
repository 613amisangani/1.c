#include <iostream>
using namespace std;
int main()
{
  
  int i,j;
  cout << "enter value for:";
  cin >> i;
  for(i=1;i<=5;++i)
  {
   for(j=1;j<=i;++j)
   {
   cout <<i;
   }
   cout << "\n";

  }
  
  return 0;
}

/*
enter value for:5
1
22
333
4444
55555
*/
