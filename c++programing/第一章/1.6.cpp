#include<iostream>
using namespace std;
int main()
{
    cout<<"�����1�ӵ�9"<<endl;
    int i;
    int b = 0;
    for(i=1;i<10;i++)
    {
        b = i + b;
    }
    cout<<"���Ϊ"<<b<<endl;
    return 0;
}
