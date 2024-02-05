#include <iostream>
using namespace std;
int main()
{
  
  int i,j,k=11;
  cout << "enter value for:";
  cin >> i;
  for(i=1;i<=5;i++)
  {
   for(j=1;j<=5;j++) 
   {
   cout <<k++;
   }
   k+=5;
   cout << "\n";

  }
  
  return 0;
}

/*
enter value for:5
1112131415
2122232425
3132333435
4142434445
5152535455
*/