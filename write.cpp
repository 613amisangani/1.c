#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fs("abc.txt");
    if(fs.is_open())
    {
        fs<<"wel-come to skill qode";
        fs<<"\n we started new lab";
        fs<<"\n we started new branch";
        fs.close();
    }
    else
    cout<<"file opening is fail.";
}