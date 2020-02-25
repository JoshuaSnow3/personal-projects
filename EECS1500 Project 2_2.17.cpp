//EECS1500 Project 2 2.17
//Joshua Snow

//This program calculates the wind chill temperature from an fahrenheit input

#include <iostream>
using namespace std;


int main()
{
    double outsideTemp;
    double windSpeed;
        
        cout << "Enter the outside temperature in Fahrenheit between -58 and 41 degrees" << endl;
        cin >> outsideTemp;
        
            while (-58 >= outsideTemp || 41 <= outsideTemp)
            {
                cout << "Please enter a temperature between -58 and 41 degrees" << endl;
                cin >> outsideTemp;
            }

        cout << "Enter the wind speed in mph, disregard direction" << endl;
        cin >> windSpeed;
            
            while (2 >= windSpeed)
            {
                cout << "The wind speed must be above 2 mph" << endl;
                cin >> windSpeed;
            }

            double windChill = 35.74 + (0.6215 * outsideTemp) - (35.75 * pow(windSpeed, 0.16)) + (0.4275 * outsideTemp * pow(windSpeed, 0.16));

       cout << "The wind chill temperature outside is " << windChill << " degrees F";

}