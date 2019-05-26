#include<iostream>
using namespace std;
int main()
{
    const float PI = 3.1415926;
    double area,volume,radius,length;
    cout<<"Enter the radius and length of a cylinder:";
    cin>>radius>>length;
    area = radius * radius * PI;
    volume = area * length;
    cout<<"The area is "<<area<<endl;
    cout<<"The volume is "<<volume<<endl;
    return 0;
}
