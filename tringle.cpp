#include <iostream>
using namespace std;

class AreaShape
{
    float area;

  public:
   
     AreaShape(float base, float height)
     {
         area = 0.5 * (base * height);
     }
     void display()
     {
         cout << "Area:\t" << area << endl;
    }
};
int main()
{
     float base,height;
      cout << "Enter length  Circle:\t";
      cin >> base >> height;
      AreaShape area(base,height);
      area.display();
}