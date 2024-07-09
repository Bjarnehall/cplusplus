
/*
Skriv en funktion som undersöker om ett av
användaren angivet tal är ett primtal.

Ett primtal jämnt delbart med ett och sig självt.
*/

#include <iostream>

using namespace std;

int isPrim(int number)
{
    if (number <=1) {
        return false;
    }

    for (int x = 2; x <= number / 2; x++) {
        if (number % x == 0) {
            return false;
        }
    }
    return true;
}




int main ()
{
    int number;
    cout << "Ange ett tal: " << endl;
    cin >> number;

    if (isPrim(number)) {
        cout << "Detta är ett primtal" << endl;
    } else {
        cout << "Detta är inte ett primtal" << endl;
    }
    return 0;
}