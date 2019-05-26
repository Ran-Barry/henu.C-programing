#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"a     "<<"b     "<<"pow(a,b)"<<endl;
    for(int i = 1;i <= 5;i++ )
    {
        a = i;
        b = i + 1;
        cout<<a<<"     "<<b<<"     "<<pow(a,b)<<endl;
    }
    return 0;
}
