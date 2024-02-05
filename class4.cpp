// Private Members
// TestCode of type integer
// Description of type string
// NoCandidate of type integer
// CenterReqd (number of centers required) of type integer
// A member function CALCNTR() to calculate and return the number of centers as
// (NoCandidates/100+1)
// Public Members
// 2
// CPP Practice Programm Skill Qode
// - A function SCHEDULE() to allow user to enter values for TestCode, Description,
// NoCandidate & call function CALCNTR() to calculate the number of Centres
//  - A function DISPTEST() to allow user to view the content of all the data members 


#include<iostream>
using namespace std;
class member{

    private:
    int testcode;
    char Description[20];
    int NoCandidate;
    int CenterReqd;

    int CALCNTR()
    {
              CenterReqd  = NoCandidate/100+1 ;

              return CenterReqd;
    }

    public:

     void SCHEDULE()
    {
        cout << "enter you testcode : ";
        cin >> testcode ;

        cout << "enter Description : ";
        cin >> Description ;

        cout << "enter  NoCandidate : ";
        cin >> NoCandidate ;

        cout << "enter  CenterReqd : ";
        cin >> CenterReqd ;

        CALCNTR();
    }
      void DISPTEST()
    {
      
        cout << "Player testcode: " << testcode <<endl;
        cout << "description: " << Description <<endl ;
        cout << "nocandidate: " << NoCandidate <<endl;
        cout << "CenterReqd: " << CenterReqd <<endl;
        cout << "cnter " << CenterReqd <<endl;
    }

};

int main()
{
    member emp;

    emp.SCHEDULE();
     cout << endl;
    emp.DISPTEST();
}
