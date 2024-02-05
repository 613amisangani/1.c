#include <iostream>
using namespace std;

class AreaShape
{
    float area;

  public:
   
     AreaShape(int length, int breadth)
     {
         area = length * breadth;
     }
    
     void display()
     {
         cout << "Area:\t" << area << endl;
    }
};
int main()
{
     float length,breadth;
      cout << "Enter length and breadth of the squre:\t";
      cin >> length >> breadth;
      AreaShape area(length,breadth);
      area.display();
}