/*
Slot machine made for a C++ course at His 
@author Jonas Bjarnehall
*/

#include <iostream>

using namespace std;

int userBalance = 0;

int inputBalance;

// Function declared
int exitGame();
void phraseWelcome();
void addToBalance();
void showBalance();
// Functions defined

// Exit Game loop
int exitGame()
{
    if (cin.eof())
        return 0;
    return 1;
}

// Welcome phrase
void phraseWelcome()
{
    cout << "" << endl
              << "Welcome to His Slot Machine" << endl
              << "" << endl
              << "Spin the wheel and win big!" << endl
              << "" << endl;
}
// Insert cash to balance
void addToBalance()
{
    userBalance += inputBalance;
}
// Show user balance
void showBalance()
{
    cout << "" << endl
         << "Current balance:   " << userBalance << endl;
}

int main () 
{
    phraseWelcome();

    while (true) 
    {
        cout << "" << endl
             << "How much do you want to put into balance?" << endl;

        cin >> inputBalance;
            if (exitGame() ==0)
            break;

        addToBalance();

        showBalance();
    }

    cout << "goodbey" << endl;
    return 0;

}
