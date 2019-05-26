#include<iostream>
using namespace std;
int main()
{
    float v0,v1,t;
    float average_acceleration;
    cout<<"Enter v0,v1,and t: ";
    cin>>v0>>v1>>t;
    average_acceleration = (v1-v0)/t;
    cout<<"The average acceleration is "<<average_acceleration;
    return 0;
}
