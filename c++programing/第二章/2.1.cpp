#include<iostream>
using namespace std;
int main()
{
    int celsius;
    double fahrenheit;
    cout<<"Enter a degree in Celsius: ";
    cin>>celsius;
    fahrenheit = (9.0/5)*celsius + 32;
    cout<<celsius <<" Celsius is "<<fahrenheit<<" Fahrenheit"<<endl;
    return 0;
}
