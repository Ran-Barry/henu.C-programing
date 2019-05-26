#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1,x2,y1,y2,distance,a;
    cout<<"Enter x1 and y1: ";
    cin>>x1>>y1;
    cout<<"Enter x2 and y2: ";
    cin>>x2>>y2;
    a = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    distance = pow(a,0.5);
    cout<<"The distance between the two points is "<<distance;
    return 0;
}
