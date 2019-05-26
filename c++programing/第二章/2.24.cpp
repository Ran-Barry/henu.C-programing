#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter an amount in int,for example 1156: ";
    int amount;
    cin>>amount;
    int dollars;
    dollars = amount/100;
    int cents;
    cents = amount % 100;
    cout<<dollars<<" dollars"<<endl;
    cout<<cents<<" cents"<<endl;
    return 0;
}
