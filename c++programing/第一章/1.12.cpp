#include<iostream>
using namespace std;
int main()
{
    float average_hour,average_seconds,kilometers;
    int miles = 24,hour = 1,minutes = 40,seconds = 35;
    kilometers = miles * 1.6;
    average_seconds = kilometers/(hour * 60 *60 +minutes *60 +seconds);
    average_hour = average_seconds * 60 *60;
    cout<<"the average speed in kilometers per hour is "<<average_hour<<endl;
    return 0;
}
