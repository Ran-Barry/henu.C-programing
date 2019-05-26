#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float investment_amount,annual_interest_rate,number_years,value,interest,interests;
    cout<<"Enter investment amount: ";
    cin>>investment_amount;
    cout<<"Enter annual interest rate in percentage: ";
    cin>>annual_interest_rate;
    cout<<"Enter number of years: ";
    cin>>number_years;
    interest = 1 + annual_interest_rate/1200;
    interests = pow(interest,number_years*12);
    value = investment_amount * interests;
    cout<<"Accumulated value is $"<<value;
    return 0;
}
