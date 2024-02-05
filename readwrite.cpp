#include<iostream>
#include<ffstream>
using namespace std;
int main()
{
    // file write
    char input[50];
    ofstream os;
    os.open("aa.txt");
    cout<<"writing to a text file:"<<endl;
    cout<<"plase enter your name:"<<endl;
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"plase enter contact number:"<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl;
    os.close();

    // file read

    ifstream is;
    string line;
    is.open("aa.txt");
    cout<<"reading from a text file : "<<endl;
    while(getline(is , line))
    {
        cout<<line<<endl;
    }
    is.close();

}