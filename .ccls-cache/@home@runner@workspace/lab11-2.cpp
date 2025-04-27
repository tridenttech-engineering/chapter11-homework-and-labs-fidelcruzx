//Lab 9-2.cpp - stores finish times in an array
//and displays the average and lowest times
//Created/revised by <Fidel Cruz> on <4/26/25>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getAverage(double times[], int numElements);
double getLowest(double times[], int numElements);

int main()
{
    double finishTimes[5] = {0.0};
    double average = 0.0;
    double lowest = 0.0;


    for (int x = 0; x < 5; x += 1)
        {
            cout << "Time for race " << x + 1 << ": "; 
            cin >> finishTimes[x];
        }
    average = getAverage(finishTimes, 5);
    lowest = getLowest(finishTimes, 5);

    cout << fixed << setprecision(1) << endl;
    cout << "Average  5k time: " << average << endl;
    cout << "Lowest 5k time: " << lowest << endl;
    
    return 0;
}//end of main function 

double getAverage(double times[], int numElements)
{
    double total = 0.0;

    for (int x = 0; x < numElements; x += 1)
        {
            total += times[x];
        }
    return total / numElements;
}

double getLowest(double times[], int numElements)
{
    double lowest = times[0];
    for (int x = 1; x < numElements; x += 1) 
        {
            if (times[x] < lowest)
                {
                    lowest = times[x];
                }
        }
    return lowest;
}
