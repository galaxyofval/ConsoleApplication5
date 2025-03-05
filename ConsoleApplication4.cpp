// Program 3
#include <iostream>
#include <random>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double principal = 0;
    int timesCompounded = 0;
    double interestRate = 0;
    cout << fixed << setprecision(2);
    cout << "Welcome to C++ Interest Calculator! Please answer these few questions below! \n";
    cout << "How much money do you have in your savings account? \n";
    cin >> principal;
    cout << "What is the interest rate of the account? \n";
    cin >> interestRate;
    cout << "How many times does said interest compound? \n";
    cin >> timesCompounded;
    cout << "Interest Rate: " << interestRate << "%\n";
    cout << "Times Compounded: " << timesCompounded << endl;
    cout << "Principal: " << "$" << principal << endl;
    double interest = pow(1 + (interestRate / timesCompounded), timesCompounded);
    cout << "Interest: " << "$" << interest << endl;
    cout << "Amount in Savings: " << "$" << principal + pow(1 + (interestRate / timesCompounded), timesCompounded) << endl;

    return 0;
}
