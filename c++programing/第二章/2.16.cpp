#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float side,area,a;
    cout<<"Enter the side: ";
    cin>>side;
    a = pow(3,0.5);
    area = 3 * a/2 * side * side;
    cout<<"The area of the hexagon is "<<area;
    return 0;
}
