#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float temperature,speed,v,wind_chill;
    cout<<"Enter the temperature in Fahrenheit: ";
    cin>>temperature;
    cout<<"Enter the wind speed in miles per hour: ";
    cin>>speed;
    v = pow(speed,0.16);
    wind_chill = 35.74 + 0.6215 * temperature - 35.75 * v + 0.4275 * temperature * v;
    cout<<"The wind chill index is "<<wind_chill;
    return 0;
}
