

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()

{
    // Declare variables for game
    int wallet = 1000;
    int playerNum;
    int bet;
    string playerCol;
    string answerPlay;
    string playType;

    // Promt to let player know what program is about and
    // if player wants to proceed.
    cout << "Welcome to His Casino" << endl
         << "Here you can play Roulette!" << endl
         << "" << endl
         << "Diffrent ways to play:" << endl
         << "Bet on a number between 1 and 36 " << endl
         << "Bet on a color Black or Red " << endl
         << "" << endl
         << "Do you wanna play?  Answer yes/no" << endl;
    
    cin  >> answerPlay;

    // Checks if player wants to proceed and if so lets the
    // player decide which type of game to play.
    if (answerPlay == "yes") {
        cout << "" << endl
             << "You have: " << wallet << " kr in your wallet "  << endl
             << "Decide if you want to play on color or number " << endl
             << "The payback is : " << endl
             << "   x2 on color         To play this type: color" << endl
             << "   x10 on number       To play this type: number" << endl;
    } else {
        cout << "Thank you for the visit bye!" << endl;
        return 0;
    }

    // Store variable for type of game to play.
    cin  >> playType;
    cout << "" << endl
         << "You hace chosen to play on: " << playType << endl;

    // Handle diffrent types of play depending on user actions.
    if (playType == "color") {
        cout << "Select a color to bet on " << endl
             << "   To bet on Black type: black" << endl
             << "   To bet on Red   type: red" << endl;
        cin  >> playerCol;
        cout << "" << endl
             << "You have chosen the color :" << playerCol << endl
             << "" << endl;

    } else if (playType == "number") {
        cout << "Select a number to bet on " << endl
             << "Type a number between 1 and 36: " << endl;
        cin  >> playerNum;
        cout << "" << endl
             << "You have chosen the number: " << playerNum << endl
             << "" << endl;

    } else {
        cout << "invalid type of play " << endl
             << "Type: " << endl
             << "   color   | to bet on color " << endl
             << "   number  | to bet on number " << endl;
        cin  >> playType;
    }

    // Promt player for amout to bet on play
    cout << "You have: " << wallet << " kr how much do you want to bet? " << endl
         << "Type:  "
         <<     "100    | to bet 100kr on play" << endl
         <<     "300    | to bet 300kr on play" << endl
         <<     "500    | to bet 500kr on play" << endl;
    
    // Store bet
    cin  >> bet;

    // Check if player can afford bet.
    if (bet > wallet) {
        cout << "You do not have enough cash to place that bet " << endl
             << "You have: " << wallet << " kr how much do you want to bet? " << endl
         << "Type:  "
         <<     "100    | to bet 100kr on play" << endl
         <<     "300    | to bet 300kr on play" << endl
         <<     "500    | to bet 500kr on play" << endl;
    } else {
        cout << "Bet is placed are you ready to roll the wheel? " << endl;
    }

    cout << "Type: spin     | to roll the wheel" << endl;


    return 0;
}