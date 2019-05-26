#include<iostream>
using namespace std;
int main()
{
    float pounds,kilograms;
    cout<<"Enter a number in pounds: ";
    cin>>pounds;
    kilograms = 0.454 * pounds;
    cout<<pounds<<" pounds is "<<kilograms<<" kilograms";
    return 0;
}
