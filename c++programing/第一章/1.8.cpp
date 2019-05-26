#include<iostream>
using namespace std;
int main()
{
    float perimeter,area,radius = 5.5;
    float a = 4*(1.0-1.0/3+1.0/5-1.0/7+1.0/9-1.0/11+1.0/13);
    perimeter = 2 * radius * a;
    area = radius * radius * a;
    cout<<"radiusΪ5.5"<<endl;
    cout<<"perimeter="<<perimeter<<endl;
    cout<<"area="<<area<<endl;
    return 0;
}
