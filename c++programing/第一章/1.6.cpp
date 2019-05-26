#include<iostream>
using namespace std;
int main()
{
    cout<<"计算从1加到9"<<endl;
    int i;
    int b = 0;
    for(i=1;i<10;i++)
    {
        b = i + b;
    }
    cout<<"结果为"<<b<<endl;
    return 0;
}
