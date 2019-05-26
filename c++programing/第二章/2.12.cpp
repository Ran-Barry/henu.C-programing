#include<iostream>
using namespace std;
int main()
{
    float speed,acceleration,minimum_runway_length;
    cout<<"Enter speed and acceleration: ";
    cin>>speed>>acceleration;
    minimum_runway_length = speed * speed /(2 * acceleration);
    cout<<"The minimum runway length for this airplane is "<<minimum_runway_length;
    return 0;
}
