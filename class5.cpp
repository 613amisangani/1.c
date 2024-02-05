// Private Members
// A data member Flight number of type integer
// A data member Destination of type string
// A data member Distance of type float
// A data member Fuel of type float 
// A member function CALFUEL() to calculate the value of Fuel as per the following criteria
// Distance Fuel
// <=1000 500
// more than 1000 and <=2000 1100
// more than 2000 2200
// Public Members
// A function FEEDINFO() to allow user to enter values for Flight Number, Destination,
// Distance & call function CALFUEL() to calculate the quantity of Fuel
// A function SHOWINFO() to allow user to view the content of all the data members 


#include<iostream>
using namespace std;
class unit{
     
     private:
     int flightnumber;
     char description[20];
     float Distance;
     float Fuel;
    
    void  CALFUEL()
    {

    }

    void FEEDINFO()
    {

        cout << "enter your flightnumber : ";
        cin >> flightnumber ;

        cout << "enter your description : ";
        cin >> description ;

        cout << "enter distance : ";
        cin >> Distance ;

        cout << "enter fuel detail : ";
        cin >> Fuel ;

    }

    void SHOWINFO()
    {
        cout << "flightnumber : " << flightnumber <<endl;
        cout << "description : " << description <<endl;
        cout << "Distance : " <<Distance <<endl;
        cout << "Fuel: " << Fuel <<endl;
    }



};