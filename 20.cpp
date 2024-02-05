#include <iostream>
using namespace std;
int main()
{
  int unit,bill;
  cout << "enter unit:";
  cin >> unit ;
 if(unit<=100)
 {
    bill = (unit*0.6);
    cout <<  " value is :"<<bill<<"";
 }
 else
 {
   if((unit>100)&&(unit<=300))
   {
      bill = (100*0.6+(unit-100)*0.8);
      cout <<  " value is :"<<bill<<"";
   }
   else
   {
      if(unit>=300)
      {
         bill = (100*0.6+200*0.8+(unit-300)*0.9);
         cout <<  " value is :"<<bill<<"";
      }
      else
      {
         if(bill<=50)
         {
            bill = (bill=50);
            cout <<  " value is :"<<bill<<"";
         }
         else
         {
           if(bill>=300)
           {
             bill = (bill+bill*0.15);
             cout <<  " value is :"<<bill<<"";
           }
         }
      }
   }
 }
  return 0;
}
 