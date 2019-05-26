#include<iostream>
using namespace std;
int main()
{
    int minutes,years,days;
    cout<<"Enter the number of minutes: ";
    cin>>minutes;
    years = minutes/(60 * 24 * 365);
    days = minutes/(60 * 24)-years * 365;
    cout<<minutes<<" minutes is approximately "<<years<<" years and "<<days<<" days";
    return 0;
}
