#include <iostream>
#include <random>
#include <string> // Make sure to include this for getline()
using namespace std;

int main()
{
    // Initializes and declares all needed variables.
    int choice = 0;
    int firstNumber = 0;
    int secondNumber = 0;
    int answer = 0;
    int score = 0;
    string pause;

    // Declares the randomization engine.
    random_device engine;


    cout << "Welcome to C++ Math! What level of addition would you like to practice? (Type number) \n";
    cout << "1. Basic 2. Advanced \n";
    cin >> choice;

    // Clears any newlines left over.
    cin.ignore();

    // Gives a math problem of the appropriate difficulty.
    if (choice == 1) {
        cout << "Level 1 selected. First problem now showing... \n";

        uniform_int_distribution<int> numberValue(10, 99);

        // Keeps giving problems until the student answers three problems in a row correctly.
        while (score < 3) {
            firstNumber = numberValue(engine);
            secondNumber = numberValue(engine);
            cout << firstNumber << " + " << secondNumber << " = \n";
            cin >> answer;
            cin.ignore(); // Clear the newline character from the buffer after reading the answer

            if (answer == firstNumber + secondNumber) {
                cout << "You got the answer right! Press Enter to continue.\n";
                score += 1;
                cout << score << "/3 in a row\n";
                getline(cin, pause); 
            }
            else {
                cout << "Sorry, your answer is not correct... the correct answer is " << firstNumber + secondNumber << ". Press Enter to continue.\n";
                score = 0;
                getline(cin, pause);
            }
        }
    }
    else if (choice == 2) {
        cout << "Level 2 selected. First problem now showing... \n";

        // Gives a harder difficulty math problem, more likely to involve regrouping.
        uniform_int_distribution<int> numberValue(100, 999);

        // Also goes until it reaches three problems in a row.
        while (score < 3) {
            firstNumber = numberValue(engine);
            secondNumber = numberValue(engine);
            cout << firstNumber << " + " << secondNumber << " = \n";
            cin >> answer;
            cin.ignore(); // Clear the newline character from the buffer after reading the answer

            if (answer == firstNumber + secondNumber) {
                cout << "You got the answer right! Press Enter to continue.\n";
                score += 1;
                cout << score << "/3 in a row\n";
                getline(cin, pause);
            }
            else {
                cout << "Sorry, your answer is not correct... the correct answer is " << firstNumber + secondNumber << ". Press Enter to continue.\n";
                score = 0;
                getline(cin, pause);
            }
        }
    }
    else {
        cout << "Invalid choice. \n";
    }
    cout << "\nYou got three problems in a row right! Press Enter to close...";
    getline(cin, pause);  // This works now because of the cin.ignore() above

    return 0;
}
