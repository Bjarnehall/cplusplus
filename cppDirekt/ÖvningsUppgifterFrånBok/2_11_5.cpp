/*
En löpartävling består av två lopp. Segraren i tävlingen är
den som har den kortaste totaltiden av de två loppen sammanlagt

Skriv ett program som
    beräknar totaltiden för en löpare,

Tiderna för de två loppen skall vara indata till programmet
och anges i timmar, minuter, sekunder med formen tt mm ss.
Resultatet från programmet skall skrivas ut i denna form

Programmet ska ta input av användaren för att jämföra
två löparen tider och utse en vinnare.

Varje löpare ska ha ett namn och en tid.
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int timme1, minut1, sekund1, timme2, minut2, sekund2;
    string namn1, namn2;


    cout << "Ange namn på första löparen    " << endl;
    cin  >> namn1;
    cout << "Ange tid för " << namn1 << " i form: timme, minut, sekund: " << endl;
    cin  >> timme1 >> minut1 >> sekund1;

    cout << "Ange namn på andra löparen    " << endl;
    cin  >> namn2;
    cout << "Ange tid för " << namn2 << " i form: timme, minut, sekund: " << endl;
    cin  >> timme2 >> minut2 >> sekund2;

    if (timme1 < timme2 || minut1 < minut2 || sekund1 < sekund2) {
        cout << namn1 << " är vinnare av loppet med en tid: "
        << setfill('0') << setw(2) << timme1 << ":"
        << setfill('0') << setw(2) << minut1 << ":"
        << setfill('0') << setw(2) << sekund1 << endl;
    } else {
        cout << namn2 << " är vinnare av loppet med en tid: "
        << setfill('0') << setw(2) << timme2 << ":"
        << setfill('0') << setw(2) << minut2 << ":"
        << setfill('0') << setw(2) << sekund2 << endl;
    }
    return 0;
}