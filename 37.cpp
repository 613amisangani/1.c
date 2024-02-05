#include <iostream>
using namespace std;
int main()
{
  
  int i,j;
  
  for(i=1;i<=5;i++)
  {
   for(j=1;j<=i;j++)
   {
   cout << i;
   }
   cout << "\n";

  }
  
  return 0;
}







/*

PS D:\c++> cd "d:\c++\" ; if ($?) { g++ 37.cpp -o 37 } ; if ($?) { .\37 }
1
22
333
4444
55555
*/
