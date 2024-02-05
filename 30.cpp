#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter value for a: ";
    cin >> a ;

     ((a%5==0)&&(a%3==0))? cout <<"Value is divisible: "<<a : cout <<"\n" <<"value is not divisible: "<<a;

    return 0;
}