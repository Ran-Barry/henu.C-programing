#include<iostream>
using namespace std;
int main()
{
    int birth,death,immigrant,years,population;
    cout<<"Enter the number of years: ";
    cin>>years;
    birth = years *( 365 * 24 * 60 *60) / 7;
    death = years * (365 * 24 * 60 *60) / 13;
    immigrant = years * (365 * 24 * 60 *60) / 45;
    population = 312032486 +(birth - death + immigrant);
    cout<<"The population in "<<years<<" years is "<<population;
    return 0;
}
