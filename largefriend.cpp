#include<iostream>
using namespace std;
class Test
{
    friend Test add(Test,Test);
   
    public:
    void setdata(int x,int y)
    
    int getvolume()
    {
    return x*y;
    }
    
};
void find(Test t) {
   if (t.x > t.y) {
       cout << "Largest is:" << t.x;
   } else {
       cout << "Largest is:" << t.y;
   }
}
int main()
{
    
}