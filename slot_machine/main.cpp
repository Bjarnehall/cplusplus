/**
 * Slot machine written in C ++
 * This is a console based program made
 * for an asignment in a C ++ course at
 * His
 * @author Jonas Bjarnehall
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Declare variables
int userBalance = 0;
int addBalance;
int bet;
string option = "init";
string ifDeposit;
string ifSpin;
string optionMenu;
string ifPlay;
string ifBet;
bool ifWin;

// Declare functions
void spinWheel(int& bet);
bool checkWin(int wheel[3][3], int& rows);
char getSymbol(int number);
void calculateMultiplier(int wheel[3][3], int bet);

int main () 
{
    // Set srand for randomness
    srand(time(0));

    while(true)
    {
    // Welcomes and explain program for user, gives user
    // option to se menu or exit program
    cout << "=====================================" << endl
         << "|    Welcome to His Slot Machine    |" << endl
         << "|===================================|" << endl
         << "|    Spin the wheel and win big!    |" << endl 
         << "|-----------------------------------|" << endl
         << "| The rules of this game is Simple  |" << endl
         << "|                 1. Deposit cash   |" << endl
         << "|                 2. Spin           |" << endl
         << "|                 3. GET RICH!      |" << endl
         << "|-----------------------------------|" << endl
         << "|To see options  type: menu         |" << endl
         << "|To exit program type: exit         |" << endl
         << "|-----------------------------------|" << endl << endl;
    // Evaluate input and choose action
    cin >> option;
        if (cin.eof()) 
            return 0;
        // Exit option action
        if (option == "exit")
            {
            return 0;
            }
        // Menu option action   
        if (option == "menu")
            {
            // Provides user with options for program
            cout << "" << endl
                 << "=====================================" << endl
                 << "|        Menu for slot machine      |" << endl
                 << "|-----------------------------------|" << endl
                 << "|Type :                             |" << endl
                 << "|      deposit | To deposit cash    |" << endl
                 << "|                                   |" << endl
                 << "|      play    | To play the game   |" << endl
                 << "|                                   |" << endl
                 << "|      exit    | Quit program       |" << endl
                 << "|                                   |" << endl
                 << "|      balance | To show balance    |" << endl
                 << "|-----------------------------------|" << endl << endl;
            }
    
        // Evaluate input and choose action
        cin >> optionMenu;
            if (cin.eof()) 
                return 0;
            // Balance option action
            if (optionMenu == "balance")
                {
                    cout << "" << endl
                         << "You have " << userBalance << " kr" << endl << endl;
                }
            // Exit option action
            if (optionMenu == "exit")
                return 0;
            // Deposit option action
            if (optionMenu == "deposit")
            {
                while (true)
                {
                    // Provides user with information about how to deposit
                    cout << "" << endl
                        << "=====================================" << endl
                        << "|    You have chosen to deposit     |" << endl
                        << "|-----------------------------------|" << endl
                        << "| How much do you want to deposit?  |" << endl
                        << "|                                   |" << endl
                        << "| We accept following amounts       |" << endl
                        << "|                             100kr |" << endl
                        << "|                             300kr |" << endl
                        << "|                             500kr |" << endl
                        << "| Type in amount to deposit:        |" << endl
                        << "|-----------------------------------|" << endl << endl;
                    // Evaluate if deposit is valid and take action
                    cin >> addBalance;
                        if (cin.eof()) 
                        return 0;
                    // Valid deposit action
                    // Adds deposit to users balance
                    if (addBalance == 100 || addBalance == 300 || addBalance == 500)
                    {
                        // add to balance
                        cout << "" << endl
                             << "Added " << addBalance << " Kr to Balance" << endl;
                        userBalance = (userBalance + addBalance);
                        cout << "Current balance is " << userBalance << " Kr" << endl << endl;
                        break;
                    }
                    // Not valid action, asks user to try again
                    else
                    {
                        cout << "Invalid amount try again!" << endl << endl;
                    }   
                }
            }
            // Play option action
            if (optionMenu == "play")
            {
                // Gameplay loop continues until user tells
                // it to exit or user run out of money
                while (true)
                {
                    // Check if exit
                    if (ifSpin == "exit")
                    {
                        // reset ifSpin
                        ifSpin = "init";
                        // exits
                        break;
                    }
                    // Checks if user got enough money to bet and promts user when not
                    if (userBalance < 10)
                    {
                        cout << "You dont have enough balance to play" << endl << endl;
                        break;
                    }
                        // Presents information about game and ask user to bet
                        cout << "=====================================" << endl
                             << "|      YOU HAVE CHOSEN TO PLAY      |" << endl
                             << "|-----------------------------------|" << endl
                             << "| Prize for winning:                |" << endl
                             << "|                   1 rows = 2x Bet |" << endl
                             << "|                   2 rows = 3x Bet |" << endl
                             << "|                   3 rows = 4x Bet |" << endl
                             << "|                   4 rows = 5x Bet |" << endl
                             << "|                   5 rows = 7x Bet |" << endl
                             << "|              Full field = 10x Bet |" << endl
                             << "|-----------------------------------|" << endl
                             << "|      PLACE YOUR BET               |" << endl
                             << "|-----------------------------------|" << endl
                             << "|Enter amount to bet per spin:      |" << endl
                             << "|Valid amounts are                  |" << endl
                             << "|                  10 kr            |" << endl
                             << "|                  20 kr            |" << endl
                             << "|                  50 kr            |" << endl
                             << "|               Type:  10 | 20 | 50 |" << endl
                             << "|-----------------------------------|" << endl << endl;
                        // Stores bet
                        cin >> bet;
                            if (cin.eof()) 
                            return 0;
                        // Check if bet is valid and ask user if sure
                        if (bet == 10 || bet == 20 || bet == 50)
                        {
                        cout << "" << endl
                             << "|===================================|" << endl
                             << "| Your bet is " << bet <<" kr                 |" << endl
                             << "| Do you want to play ?             |" << endl
                             << "|                   Type:  yes | no |" << endl
                             << "|-----------------------------------|" << endl << endl;
                        // Evaluate if user is sure
                        cin >> ifPlay;
                            if (cin.eof())
                            return 0;
                        // if not action
                        if (ifPlay == "no")
                        {
                            // Exit loop
                            break;
                        }
                        // if yes action
                        if (ifPlay == "yes")
                        {
                            // Game loop until money runs out or player exit
                            while(true)
                            {
                                // Check if user afford to play
                                if (userBalance < bet)
                                {
                                    break;
                                }
                                // Present option to spin or exit
                                cout << "" << endl
                                     << "|===================================|" << endl
                                     << "| To spin the slot machine:         |" << endl
                                     << "|                    Type:          |" << endl
                                     << "|                              spin |" << endl
                                     << "|                              exit |" << endl
                                     << "|-----------------------------------|" << endl << endl;

                                cin  >> ifSpin;
                                    if (cin.eof())
                                    return 0;
                                // spin option action
                                if(ifSpin == "spin")
                                {
                                    // suntract bet from deposit
                                    userBalance = (userBalance - bet);
                                    // Spin the slot wheel calling function
                                    spinWheel(bet);
                                    // Present balance for user
                                    cout << "" << endl
                                         << "Your current balance is: " << userBalance << " kr" << endl << endl;
                                }
                                else
                                {
                                    cout << "" << endl;
                                    break;
                                }
                            }
                        }
                        else
                        {
                            // Invalid input message
                            cout << "Invalid input try again! " << endl;
                        }
                    }
                    else
                    {
                        // Invalid input message
                        cout << "Invalid amount try again! " << endl;
                    }
                }
            }
            
        }

    
    
}


// Function used for slot wheel mechanics
void spinWheel(int& bet)
{
    // 2D array representing slot wheel
    int wheel[3][3];
    // Fill array with numbers random 1 - 3
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            wheel[i][j] = rand() % 3 + 1;
        }
    }
    // Presents wheel for user
    cout << "=====================================" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Present numbers with symbols
            // Call function getSymbol
            cout << "|      " << getSymbol(wheel[i][j]) << "    ";
        }
        cout << "|" << endl;
    }
    cout << "=====================================" << endl << endl;
    // Call function for calculate prize
    calculateMultiplier(wheel, bet);
}
// Function for calculating price
void calculateMultiplier(int wheel[3][3], int bet)
{
    int rows = 0;
    // Use function checkWin
    ifWin = checkWin(wheel, rows);
    // Check if win
    if (ifWin)
    {
        // Defining multiplier
        int multiplier = 0;
        switch (rows)
        {
            case 1:
                multiplier = 2;
                break;
            case 2:
                multiplier = 3;
                break;
            case 3:
                multiplier = 4;
                break;
            case 4:
                multiplier = 5;
                break;
            case 5:
                multiplier = 7;
                break;
            case 6:
                multiplier = 10;
                break;
            default:
                multiplier = 0;
                break;
        }
        // Calculating prize
        int prize = bet * multiplier;
        // Present prize for user
        cout << "You won " << prize << " kr" << endl;
        // Update users balance if win
        userBalance = (userBalance + prize);
    }
    // If not win console out message and balance to user
    if (!ifWin)
    {
        cout << " Sorry you lost your bet your " << endl
             << " balance is now " << userBalance << " kr" << endl;
    }

}
// Function for calculating rows in game
bool checkWin(int wheel[3][3], int& rows)
{
    rows = 0;
    // Horizontal
    for (int i = 0; i < 3; i++)
    {
        if (wheel[i][0] == wheel[i][1] && wheel[i][1] == wheel [i][2])
        {
            rows++;
        }
    }
    // Vertical
    for (int j = 0; j < 3; j++)
    {
        if (wheel[0][j] == wheel[1][j] && wheel[1][j] == wheel[2][j])
        {
            rows++;
        }
    }
    // Diagonal
    if (wheel[0][0] == wheel[1][1] && wheel[1][1] == wheel[2][2])
    {
        rows++;
    }
    if (wheel[0][2] == wheel[1][1] && wheel[1][1] == wheel[2][0])
    {
        rows++;
    }
    return rows > 0;
}
// Function return char for visual presentation
char getSymbol(int number)
{
    switch (number)
    {
        case 1:
            return 'A';
        case 2:
            return 'O';
        case 3:
            return 'X';
        default:
            return ' ';
    }
}