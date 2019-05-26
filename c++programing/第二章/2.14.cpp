#include<iostream>
using namespace std;
int main()
{
    float pounds,inches,BMI;
    cout<<"Enter weight in pounds: ";
    cin>>pounds;
    cout<<"Enter height in inches: ";
    cin>>inches;
    BMI = 0.45359237 * pounds /(0.0254 * inches * 0.0254 * inches);
    cout<<"BMI is "<<BMI;
    return 0;
}
