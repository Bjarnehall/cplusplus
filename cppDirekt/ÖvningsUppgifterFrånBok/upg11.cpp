/*
Skriv en funktion som beräknar ett heltals tecken. Som resultat skall
funktionen ge värdet 1 om talet är större än 0, värder 0 om talet är
lika med 0 och värdet -1 om talet är mindre än 0.
*/

#include <iostream>

using namespace std;


int calcOne(int number) {
    if (number > 0) {
        return 1;
    } else if (number < 0) {
        return -1;
    } else {
        return 0;
    }
}


int main () 
{
    cout << "Enter a number: " << endl;

    int input;
    cin >> input;

    int result = calcOne(input);

    cout << result << endl;

}