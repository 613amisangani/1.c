// 6. Define a class REPORT with the following specification:
// Private members :
// adno 4 digit admission number
// name 20 characters
// marks an array of 5 floating point values
// average average marks obtained
// GETAVG() a function to compute the average obtained in five subject
// Public members:
// READINFO() function to accept values for adno, name, marks. Invoke the function
// GETAVG()
// DISPLAYINFO() function to display all data members of a report on the screen.
// You should give function definitions. 
// using constructor.
#include<iostream>
using namespace std;
class test
{
 
    int adn;
    char name[10];
    float english;
    float math;
    float science;
    float total;
   public:
    void display()
    {
        cout <<"enter your num:";
        cin >>adn ;
        cout <<"enter your name:";
        cin >>name ;
        cout <<"enter your english mark:";
        cin >>english ;
        cout <<"enter your math mark:";
        cin >>math ;
        cout <<"enter your science mark:";
        cin >>science ;
    }
    void ctotal()
      {
          total = english+math+science;
          cout <<"total is:"<<total ;
      }
      
 
};
int main()
{
    test t ;
    t.display();
    t.ctotal();
}
