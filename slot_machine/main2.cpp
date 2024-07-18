/*
Slot machine made for a C++ course at His 
@author Jonas Bjarnehall
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Variables declared
int userBalance = 0;
int inputBalance;
string ifDeposit;
bool ifWin;
string ifSpin;

// Function declared
int exitGame();
void phraseWelcome();
void phraseDeposit();
void phraseValidDeposit();
void addToBalance();
void showBalance();
void spinWheel(int& bet);
bool checkWin(int wheel[3][3]);

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
              << "*Welcome to His Slot Machine*" << endl
              << "=============================" << endl
              << "Spin the wheel and win big!" << endl << endl
              << "The rules of this game is Ez" << endl
              << "  1. Deposit cash " << endl
              << "  2. Spin the slotmachine " << endl
              << "  3. GET RICH! " << endl; 
}

void phraseDeposit()
{
    cout << "Current balance is: " << userBalance << endl
         << "You don't have enough cash to play " << endl
         << "Do you want to make a deposit? ";
}

void phraseValidDeposit()
{
    cout << "valid deposits are : 100, 300 or 500 kr " << endl;
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
// Clear console input if wrong datatype insert
void ifCinFail()
{
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Invalid input" << endl;

}
// Checkwin function------------------------------
bool checkWin(int wheel[3][3], int& matchedRows)
{
    matchedRows = 0;
    // Check for horizontal rows
    for (int i = 0; i < 3; i++)
    {
        if (wheel[i][0] == wheel[i][1] && wheel[i][1] == wheel [i][2])
        {
            matchedRows++;
        }
    }
    // Check vertical rows
    for (int j = 0; j < 3; j++)
    {
        if (wheel[0][j] == wheel[1][j] && wheel[1][j] == wheel[2][j])
        {
            matchedRows++;
        }

    }
    // Check diagonal columns
        // Check diagonals
    if (wheel[0][0] == wheel[1][1] && wheel[1][1] == wheel[2][2])
    {
        matchedRows++;
    }
    if (wheel[0][2] == wheel[1][1] && wheel[1][1] == wheel[2][0])
    {
        matchedRows++;
    }

    return matchedRows;


}
// Spinwheel function--------------------------------
void spinWheel(int& bet)
{
    int wheel[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            wheel[i][j] = rand() % 3 + 1;
        }
    }

    cout << "Wheel result: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << wheel[i][j] << " ";
        }
        cout << endl;
    }

    int  matchedRows = 0;
    ifWin = checkWin(wheel, matchedRows);

    if (ifWin)
    {
        int prizeMiltiplier = 0;
        switch (matchedRows)
        {
            case 1:
                prizeMiltiplier = 2;
                break;
            case 2:
                prizeMiltiplier = 3;
                break;
            case 3:
                prizeMiltiplier = 4;
            case 4:
                prizeMiltiplier = 5;
            case 5:
                prizeMiltiplier = 7;
                break;
            case 6:
                prizeMiltiplier = 10;

            default:
                prizeMiltiplier = 0;
                break;
        }

        int prize = bet * prizeMiltiplier;
        cout << "You win " << prize << " kr" << endl;
        userBalance = (userBalance += prize);
        userBalance = (userBalance - bet);
    }
    else
    {
        cout << "Sorry you lost " << bet << " kr" << endl;
        userBalance -= bet;
    }

    showBalance();
}

int main () 
{
    srand(time(0));
//---------------------------------
// Introduces the user to the 
// program with a textpromt
//---------------------------------
    phraseWelcome();
//---------------------------------
//Handle deposits
//---------------------------------
    while (userBalance < 100) 
    {
        // Promt user to make a deposit
        phraseDeposit();
        cin  >> ifDeposit;
        if (ifDeposit == "yes" || ifDeposit == "Yes" || ifDeposit == "YES") 
        {
            phraseValidDeposit();
            cout << "Enter deposit amount" << endl;
            cin >> inputBalance;

            // Handles unexpected input
            if (cin.fail())
            {
                ifCinFail();
            }
            if (exitGame() == 0)
                break;

            // Check if deposit amount is valid 
            if (inputBalance == 100 || inputBalance == 300 || inputBalance == 500)
            {
                addToBalance();
            }
            else
            {
                phraseValidDeposit();
            }   
                showBalance();
            }
            else 
            {
                break;
            }
            if (userBalance >= 100) {
                cout << "Your balance is now " << userBalance << "kr " << endl;
        }
    }
//---------------------------------------
// Handles bet
// --------------------------------------

    cout << "==============================" << endl
         << "=Spin the wheel and get rich!=" << endl
         << "==============================" << endl;


    cout << "Prizes for winning: " << endl
         << "   1 row = 2X" << endl
         << "   2 row = 3X" << endl
         << "   3 row = 4X" << endl
         << "   4 row = 5X" << endl
         << "   5 row = 7X" << endl
         << "   Full  = 10X" << endl << endl;

    int bet = 0;
    while(true)
    {
    cout << "Place your bet " << endl
         << "       5kr" << endl
         << "      10kr" << endl
         << "      20kr" << endl;

    cin >> bet;
        if (cin.fail())
        {
            ifCinFail();
        }
        if (exitGame() == 0)
            break;

    if (bet != 5 && bet !=10 && bet !=20) {
        cout << "Invalid bet try again" << endl;
    } else {
        break;
    }
    }

//----------------------------------------
// Handles spin
//----------------------------------------
while(ifSpin !="menu") {

cout << "You have bet " << bet << " kr" << endl
     << "Type: " << endl
     << "   spin | To spin the wheel " << endl
     << "   menu | Go to main menu " << endl
     << "   exit | To exit game " << endl; 

    

    cin >> ifSpin;

    if(ifSpin == "spin") 
    {
        // Spin the wheel
        spinWheel(bet);
    } 
    else if (ifSpin == "exit")
    {
        // exit game
        return 0;
    }
    else 
    {
        cout << "Type: " << endl
             << "   spin | To spin the wheel " << endl
             << "   menu | Go to main menu " << endl
             << "   exit | To exit game " << endl;
    }
    }

   cout << "loop is out" << endl;
    return 0;

}
