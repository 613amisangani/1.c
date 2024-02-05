#include <iostream>
using namespace std;

class AreaShape
{
    float area;

  public:
   
     AreaShape(int length, int len)
     {
         area = length * len;
     }
    
     void display()
     {
         cout << "Area:\t" << area << endl;
    }
};
int main()
{
     float length,len;
      cout << "Enter the  length :\t";
      cin >> length >> len;
      AreaShape area(length,len);
      area.display();
}