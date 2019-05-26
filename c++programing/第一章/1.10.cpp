#include<iostream>
using namespace std;
int main()
{
    float mile,kilometers,minutes,seconds,Average_Minutes,Average_Hour;
    minutes = 45;
    seconds = 30;
    kilometers = 14;
    mile = kilometers / 1.6;
    Average_Minutes = mile /(minutes + seconds/60);
    Average_Hour = Average_Minutes * 60;
    cout<<"Assume a runner runs 14 kilometers in 45 minutes and 30 seconds."<<endl;
    cout<<"the average speed in miles per hour ="<<Average_Hour<<endl;
    return 0;

}
