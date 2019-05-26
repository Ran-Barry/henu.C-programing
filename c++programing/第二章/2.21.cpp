#include<iostream>
using namespace std;
int main()
{
    float distance,miles,price,cost;
    cout<<"Enter the driving distance: ";
    cin>>distance;
    cout<<"Enter miles per gallon: ";
    cin>>miles;
    cout<<"Enter price per gallon: ";
    cin>>price;
    cost = distance * miles * price;
    cout<<"The cost of driving is $"<<cost;
    return 0;
}
