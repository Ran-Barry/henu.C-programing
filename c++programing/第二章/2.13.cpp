#include<iostream>
using namespace std;
int main()
{
    int month;
    float value = 0,account,Account;
    cout<<"Enter the monthly saving amount: ";
    cin>>account;
    for(int i = 1;i <= 6;i++)
    {
        Account = account + value;
        value = Account * (1 + 0.00417);
    }
    cout<<"After the sixth month,the account value is $"<<value;
    return 0;
}
