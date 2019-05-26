#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,x1,x2,x3,y1,y2,y3,side1,side2,side3,s,area;
    cout<<"Enter three points for a triangle: ";
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    a = (x2-x1)*(x2-x1) +(y2-y1)*(y2-y1);
    side1 = pow(a,0.5);
    b = (x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
    side2 = pow(b,0.5);
    c = (x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
    side3 = pow(c,0.5);
    s = (side1 + side2 + side3)/2;
    d = s*(s-side1)*(s-side2)*(s-side3);
    area = pow(d,0.5);
    cout<<"The area of the triangle is "<<area;
    return 0;
}
