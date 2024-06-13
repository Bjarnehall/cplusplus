/*
En löpartävling består av två lopp. Segraren i tävlingen är
den som har den kortaste totaltiden av de två loppen sammanlagt

Skriv ett program som
    beräknar totaltiden för en löpare,

Tiderna för de två loppen skall vara indata till programmet
och anges i timmar, minuter, sekunder med formen tt mm ss.
Resultatet från programmet skall skrivas ut i denna form

Programmet ska ta input av användaren för att jämföra
två löpares tider och utse en vinnare.

Varje löpare ska ha ett namn och en tid.
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int timme1, minut1, sekund1, timme1_2, minut1_2, sekund1_2;
    int timme2, minut2, sekund2, timme2_2, minut2_2, sekund2_2;
    int total_timme1, total_timme2, total_minut1, total_minut2;
    int total_sekund1, total_sekund2;
    string namn1, namn2;


    cout << "Ange namn på första löparen    " << endl;
    cin  >> namn1;
    cout << "Ange tid för " << namn1 << " första lopp i form: timme, minut, sekund: " << endl;
    cin  >> timme1 >> minut1 >> sekund1;
    cout << "Ange tid för " << namn1 << " andra lopp i form: timme, minut, sekund: " << endl;
    cin  >> timme1_2 >> minut1_2 >> sekund1_2;

    total_timme1 = timme1 + timme1_2;
    total_minut1 = minut1 + minut1_2;
    total_sekund1 = sekund1 + sekund1_2;

    if (total_minut1 >= 60) {
        total_minut1 -= 60;
        total_timme1 += 1;
    }
    if (total_sekund1 >= 60) {
        total_sekund1 -= 60;
        total_minut1 += 1;
    }

    cout << "Ange namn på andra löparen    " << endl;
    cin  >> namn2;
    cout << "Ange tid för " << namn2 << " första lopp i form: timme, minut, sekund: " << endl;
    cin  >> timme2 >> minut2 >> sekund2;
    cout << "Ange tid för " << namn2 << " andra lopp i form: timme, minut, sekund: " << endl;
    cin  >> timme2_2 >> minut2_2 >> sekund2_2;

    total_timme2 = timme2 + timme2_2;
    total_minut2 = minut2 + minut2_2;
    total_sekund2 = sekund2 + sekund2_2;

    if (total_minut2 >= 60); {
        total_minut2 -= 60;
        total_timme2 += 1;
    }
    if (total_sekund2 >= 60); {
        total_sekund2 -= 60;
        total_minut2 += 1;
    }

    if (total_timme1 < total_timme2 ||
       (total_timme1 == total_timme2 && total_minut1 < total_minut2) ||
       (total_timme1 == total_timme2 && total_minut1 == total_minut2 && total_sekund1 < total_sekund2)) {
        cout << namn1 << " är vinnare av loppet med en tid: "
        << setfill('0') << setw(2) << total_timme1 << ":"
        << setfill('0') << setw(2) << total_minut1 << ":"
        << setfill('0') << setw(2) << total_sekund1 << endl;
    } else {
        cout << namn2 << " är vinnare av loppet med en tid: "
        << setfill('0') << setw(2) << total_timme2 << ":"
        << setfill('0') << setw(2) << total_minut2 << ":"
        << setfill('0') << setw(2) << total_sekund2 << endl;
    }
    return 0;
}