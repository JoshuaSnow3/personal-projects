// EECS1500 Project 2_2.23.cpp
// Joshua Snow

// Program calculates your predicted interest over a number of years

#include <iostream>
using namespace std;

int main()
{
    double initialInvestment;
    double interestRatePercent;
    int numOfYears;

        cout << "This program will predict your collective interest over an entered time. Start by entering your initial investment." << endl;
            cin >> initialInvestment;
        cout << "Enter your monthly interest rate." << endl;
            cin >> interestRatePercent;

               interestRatePercent = interestRatePercent / 12;
        double interestRateDecimal = interestRatePercent / 100;

        cout << "How many years is the investment being compounded?" << endl;
            cin >> numOfYears;

            double futureInvestment = (initialInvestment * pow((1 + interestRateDecimal), (numOfYears * 12)));

                cout << "Your investment is predicted to reach $" << futureInvestment << endl;

        


}

