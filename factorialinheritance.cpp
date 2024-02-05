#include<iostream>
using namespace std;
class base{
    protected :
    int rollno;
    char name[10];
    int math;
    int science;
    int english;
    int total;
    float per;
    public:
    void result()
    {
       cout <<"enter your rollnum:";
        cin >>rollno ;
        cout <<"enter your name:";
        cin >>name ;
        cout <<"enter your english mark:";
        cin >>english ;
        cout <<"enter your math mark:";
        cin >>math ;
        cout <<"enter your science mark:";
        cin >>science ;
       
    }
};
class derived : public base
{
    public :
   
    void world()
    {
         
       total = english + math + science;
       cout<<"total is :"<<total<<endl;
       per = (total*100)/300;
       cout<<"total is :"<<per<<endl;
    }
};
int main()
{
    derived d;
    d.result();
    d.world();
}