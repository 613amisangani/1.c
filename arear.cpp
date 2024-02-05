#include <iostream>
using namespace std;

class AreaShape
{
    float area;

  public:
    AreaShape(float radius)
    {
        area = 3.14 * radius * radius;
    }
    
     void display()
     {
         cout << "Area:\t" << area << endl;
    }
};
int main()
{
     float radius;
      cout << "Enter Radius of the Circle:\t";
      cin >> radius;
      AreaShape area(radius);
      area.display();
}