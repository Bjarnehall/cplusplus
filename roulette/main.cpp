/*
 This is a c++ program for a console based roulette game
 The program is made as an assignment for a introductory
 course at His university
 @author Jonas Bjarnehall
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

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
    string spin;
    string playAgain;

    // Let game loop
    while (true)
    { 
         
         // Promt to let user know what the program is about
          cout << "" << endl
               << "       Welcome to His Casino" << endl
               << "====================================" << endl
               << "     Here you can play Roulette" << endl
               << "" << endl
               << "Diffrent ways to play:" << endl
               << "Bet on a number:    between 1 and 36" << endl
               << "Bet on a color:         Black or Red" << endl
               << "" << endl
               << "Do you wanna play?     Answer yes/no" << endl;
          
          // Let user tell program to proceed or not 
          cin >> answerPlay;
               if (cin.eof()) 
                    return 0;// Let user shut down program

          // Checks if user wants to proceed and if so let the user decide path to proceed
          if (answerPlay == "yes")
                    {
                         cout << "" << endl
                              << "You have: " << wallet << " kr     in your wallet " << endl
                              << "" << endl
                              << "Decide if you want to play on color" << endl
                              << "or a chosen number the payback is :" << endl
                              << "" << endl
                              << "   x2 on color         Type:  color" << endl
                              << "   x10 on number       Type: number" << endl;
                    }
                    else
                    {
                         cout << "Thank you for the visit bye!" << endl;
                         return 0; // shut program down if user does not answe yes
                    }

          // Let user input type of play and store that value
          cin >> playType;
                    if (cin.eof()) 
                         return 0;// Let user shut down program

               //Let user know wich type of play that is chosen
          cout << "" << endl
               << "You hace chosen to play on a " << playType << endl;

          // Depending on type of play chosen program proceeds diffrently
          if (playType == "color")
               {
                    cout << "Select a color to bet on " << endl
                         << "   To bet on Black type: black" << endl
                         << "   To bet on Red   type: red" << endl;
                    cin >> playerCol;
                    if (cin.eof())
                         return 0; // Let user shut down program
                    cout << "" << endl
                         << "You have chosen the color :" << playerCol << endl
                         << "" << endl;
               }
               else if (playType == "number")
                    {
                         cout << "Select a number to bet on " << endl
                              << "Type a number between 1 and 36: " << endl;
                         cin >> playerNum;
                         if (cin.eof())
                              return 0; // Let user shut down program
                         cout << "" << endl
                              << "You have chosen the number: " << playerNum << endl
                              << "" << endl;
                    }
                    else
                         {
                              cout << "invalid type of play " << endl
                                   << "Type: " << endl
                                   << "   color   | to bet on color " << endl
                                   << "   number  | to bet on number " << endl;
                              cin >> playType;
                              if (cin.eof())
                                   return 0; // Let user shut down program
                         }

          // Let user place a bet on type of play
          cout << "You have: " << wallet << " kr how much do you want to bet? " << endl
               << "Type:  " << endl
               << "100    | to bet 100kr on play" << endl
               << "300    | to bet 300kr on play" << endl
               << "500    | to bet 500kr on play" << endl;

          // Let user input bet and stores value
          cin >> bet;
          if (cin.eof())
               return 0; // Let user shut down program

          // Control that makes sure the user can afford chosen bet
          if (bet > wallet)
               {
                    cout << "You do not have enough cash to place that bet " << endl
                         << "You have: " << wallet << " kr how much do you want to bet? " << endl
                         << "Type:  "
                         << "100    | to bet 100kr on play" << endl
                         << "300    | to bet 300kr on play" << endl
                         << "500    | to bet 500kr on play" << endl;
               }
               // Let user proceed after control of bet
               else
                    {
                         cout << "Bet is placed are you ready to roll the wheel? " << endl;
                    }

          cout << "Type: spin     | to roll the wheel" << endl;
          cin >> spin;
          if (cin.eof())
               return 0; // Let user shut down program

          if (spin == "spin")
          {
               // Check if user typed "spin" and if so spin the wheel
               srand(time(0));
               int resultNum = rand() % 36 + 1;
               string resultCol = (resultNum % 2 == 0) ? "black" : "red"; // color logging

               cout << "The wheel landed on " << resultNum << " " << resultCol << endl;

               // Check if user has played on color and proceed with win or loose
               if (playType == "color")
               {
                    if (playerCol == resultCol)
                    {
                         wallet += bet;
                         cout << "Congratulations! you won, your new balance is: " << wallet << " kr" << endl;
                    }
                    else 
                    {
                         wallet -= bet;
                         cout << "sorry you lost. your new balance is: " << wallet << " kr" << endl;
                    }
               }

               // Check if user has played on number and proceed with win or loose 
               else if (playType == "number") 
               {
                    if (playerNum == resultNum) 
                    {
                         wallet += bet * 10;
                         cout << "Congratulations! you won. Your new wallet balance is: " << wallet << " kr" << endl;
                    } 
                    else 
                    {
                    wallet -= bet;
                    cout << "Sorry, you lost. Your new balance is: " << wallet << " kr" << endl;
                    }       
               }
     
          } 
          else 
          {
               cout << "Invalid command type: spin to roll " << endl;
               continue;
          }
          // Check if there is balance in wallet before letting user play again
          if (wallet <= 0) 
          {
               cout << "You have run out of money. Game OVER!" << endl;
               return 0;
          }

          // ask user to play another round or not
          cout << "Do you want to play again? (yes/no)" << endl;
          
          // Store value for play again or not
          cin >> playAgain;
          if (cin.eof())
               return 0; // Shut the program down

          // Check if user typed yes to play again otherwise shut program down
          if (playAgain != "yes") 
          {
               cout << "Thank you for playing! Goodbey!" << endl;
               return 0;
          }
     }
     
     return 0;
}
