#include<iostream>
using namespace std;
int main()
{
    int integer,ge,shi,bai,sum;
    cout<<"Enter a number between 0 and 1000: ";
    cin>>integer;
    bai = integer / 100;
    ge = integer % 10;
    shi = (integer / 10 - ge)/10;
    sum = bai + ge + shi;
    cout<<"The sum of the digits is "<<sum;
    return 0;
}
