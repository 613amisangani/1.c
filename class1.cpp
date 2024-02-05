// 1. Define a class student with the following specification
// Private members of class student
// admno integer
// sname 20 character
// eng. math, science float
// total float
// ctotal() a function to calculate eng + math + science with float return type.
// Public member function of class student
// Takedata() Function to accept values for admno, sname, eng, science and invoke
// ctotal() to calculate total.
// Showdata() Function to display all the data members on the screen

#include<iostream>
using namespace std;
class student
{
    private:
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
  student s;
  s.display();
  s.ctotal();
}