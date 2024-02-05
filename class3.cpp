// Private members:
// bcode 4 digits code number
// bname 20 characters
// innings, notout, runs integer type
// batavg it is calculated according to the formula –
// batavg =runs/(innings-notout)
// calcavg() Function to compute batavg
// Public members:
// readdata() Function to accept value from bcode, name, innings, notout and
// invoke the function
// calcavg() to calculate.
// displaydata() Function to display the data members on the screen.

#include<iostream>
using namespace std;
class cricketer{
    private:
    int bcode;
    char bname[6];
    int innings;
    int notout;
    int runs;
    float batavg;

    public:
    
    int calcavg() {
        
            batavg = runs/(innings-notout);

            return batavg;
        }
    


    void readdata()
    {
        cout << "enter your code : ";
        cin >> bcode ;

        cout << "enter your name : ";
        cin >> bname ;

        cout << "enter  of innings : ";
        cin >> innings ;

        cout << "enter you not-out : ";
        cin >> notout ;

        cout << "enter your runs : ";
        cin >> runs ;

        calcavg();
    }

    void displaydata()
    {
        cout << "Player Code: " << bcode <<endl;
        cout << "Player name: " << bname <<endl ;
        cout << "your innings: " << innings <<endl;
        cout << "not out: " << notout <<endl;
        cout << "your runs: " << runs <<endl;
        cout << "Batting Average: " << batavg <<endl;
    }

};
int main()
{
     cricketer player;

    player.readdata();
    cout << endl;
    player.displaydata();

    return 0;
}
