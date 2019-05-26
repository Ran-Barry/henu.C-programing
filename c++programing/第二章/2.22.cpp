#include<iostream>
using namespace std;
int main()
{
    float balance,interest_rate,interest;
    cout<<"Enter balance and interest rate (e.g.,3 for 3%): ";
    cin>>balance>>interest_rate;
    interest = balance * (interest_rate / 1200);
    cout<<"The interest is "<<interest;
    return 0;
}
