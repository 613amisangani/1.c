#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string srg;
    ifstream fs("abc.txt");
    if(fs.is_open())
    {
       while(getline (fs,srg))
       {
         cout<<srg<<endl;
       }
        fs.close();
    }
    else
    cout<<"file opening is fail.";
}