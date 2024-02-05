#include <iostream>
//#include <cstring>

class Cricketer {
private:
    int bcode;
    char bname[21];
    int innings;
    int notout;
    int runs;
    float batavg;

public:
    
    void calcavg() {
        if (innings - notout != 0) {
            batavg = static_cast<float>(runs) / (innings - notout);
        } else {
            
            batavg = 0.0f;
        }
    }

    
    void readdata() {
        std::cout << "Enter player code (4 digits): ";
        std::cin >> bcode;

        std::cout << "Enter player name (up to 20 characters): ";
        std::cin.ignore(); 
        std::cin.getline(bname, 21);

        std::cout << "Enter number of innings played: ";
        std::cin >> innings;

        std::cout << "Enter number of times not out: ";
        std::cin >> notout;

        std::cout << "Enter total runs scored: ";
        std::cin >> runs;

       
        calcavg();
    }

    
    void displaydata() {
        std::cout << "Player Code: " << bcode << std::endl;
        std::cout << "Player Name: " << bname << std::endl;
        std::cout << "Innings Played: " << innings << std::endl;
        std::cout << "Not Out: " << notout << std::endl;
        std::cout << "Runs Scored: " << runs << std::endl;
        std::cout << "Batting Average: " << batavg << std::endl;
    }
};

int main() {
    Cricketer player;

    
    player.readdata();
    player.displaydata();

    return 0;
}