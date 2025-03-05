#include <iostream>
using namespace std;

int main()
{
    float cookies = 0;
    float sugar = 1.5;
    float butter = 1;
    float flour = 2.75;
    // Ask the user how many cookies they'd like to make.
    cout << "How many cookies would you like to make? \n";
    cin >> cookies;
    // Formulas to translate the default recipe requirements into a different amount of cookies.
    cout << "You will need: \n" << (cookies * (sugar / 48)) << " cup(s) of sugar. \n";
    cout << (cookies * (butter / 48)) << " cup(s) of butter. \n";
    cout << (cookies * (flour / 48)) << " cup(s) of flour. \n";


    return 0;
}