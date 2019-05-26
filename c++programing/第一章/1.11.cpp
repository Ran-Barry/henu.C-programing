#include<iostream>
using namespace std;
int main()
{
    int birth_seconds = 7,death_seconds = 13,immigrant_seconds = 45,days = 365,years = 5;
    long birth_population,death_population,immigrant_population;
    long population = 312032486;
    birth_population = (years * days * 24 * 60 *60)/birth_seconds;
    death_population = (years * days *24 * 60 *60)/death_seconds;
    immigrant_population = (years * days * 24 * 60 * 60)/immigrant_seconds;
    population = population + birth_population - death_population + immigrant_population;
    cout<<"the population for each of the next five years are "<<population<<endl;
    return 0;
}
