#include<iostream>
using namespace std;
int main()
{
    float subtotal,gratuity_rate,gratuity,total;
    cout<<"Enter the subtotal and a gratuity rate: ";
    cin>>subtotal>>gratuity_rate;
    total = subtotal + 0.1 * gratuity_rate;
    cout<<"The gratuity is $"<<0.1 * gratuity_rate<<" and total is $"<<total;
    return 0;
}
