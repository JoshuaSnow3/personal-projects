// EECS1500 Project 2   2.9
//Joshua Snow

// This program takes the starting velocity and ending velocity from a time period to calculate acceleration

#include <iostream>
using namespace std;

int main()
{
    double startVelocity;
    double endVelocity;
    double totalTime;

        cout << "Please enter the starting velocity" << endl;
        cin >> startVelocity;

        cout << "Please enter the ending velocity" << endl;
        cin >> endVelocity;

        cout << "Please enter the timespan your measurements took place over in seconds" << endl;
        cin >> totalTime;

    double acceleration = (endVelocity - startVelocity) / totalTime;

        cout << "The calculated acceleration was " << acceleration << " m/s^2";
        
    return 0;


}