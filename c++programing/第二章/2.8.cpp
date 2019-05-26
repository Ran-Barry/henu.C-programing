#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int time_zone_offset;
    int totalSeconds = time(0);
    int currentSeconds = totalSeconds % 60;
    int totalMinutes = totalSeconds / 60;
    int currentMinutes = totalMinutes % 60;
    int totalHour = totalMinutes / 60;
    int currentHour = totalHour % 24;
    int current_Hour;
    cout<<"Enter the time zone offset to GMT: ";
    cin>>time_zone_offset;
    current_Hour = currentHour + time_zone_offset;
    cout<<"The current time is "<<current_Hour<<":"<<currentMinutes<<":"<<currentSeconds;
    return 0;
}
