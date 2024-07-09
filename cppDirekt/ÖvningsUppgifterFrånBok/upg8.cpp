/***8** Avståndsformeln
Avståndet mellan två punkter i en graf kan räknas ut i en graf. Skapa ett programm
som tar två punkter av användaren angivna och räknar ut avståndet dem emellan.*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

    double cordinateOneX;
    double cordinateOneY;
    double cordinateTwoX;
    double cordinateTwoY;
    double aUnit;
    double bUnit;
    double distancePow;
    double resultDistance;
    string ifCalculate;

    char cordinate;

    // Functions
    void presentCalc ();
    void askCordinateOne ();
    void askCordinateTwo ();

    // Present the program
    void presentCalc () {
        cout << "" << endl
             << "Välkommen här kan du räkna ut " << endl
             << "avståndet emellan två kordinater " << endl
             << "Med hjälp av avståndsformeln. " << endl
             << "" << endl;
    }

    // Ask and store user value for cordinate one
    void askCordinateOne () {
        cout << "Ange värdet för första kordinatens X värde: " << endl;
        cin  >> cordinateOneX;
        if (cin.eof()) return;
        cout << "Ange värdet för första kordinatens Y värde: " << endl;
        cin  >> cordinateOneY;
        if (cin.eof()) return;
    }

    // Ask and store user value for cordinate two
    void askCordinateTwo () {
        cout << "Ange värdet för andra kordinatens X värde: " << endl;
        cin  >> cordinateTwoX;
        if (cin.eof()) return;
        cout << "Ange värdet för andra kordinatens Y värde: " << endl;
        cin  >> cordinateTwoY; 
        if (cin.eof()) return;   
    }



int main ()
{
    presentCalc();


    while (true) {

        askCordinateOne ();
            if (cin.eof()) {
                cout << "Stänger ner program " << endl;
                return 0;
            }
        askCordinateTwo ();
            if (cin.eof()) {
                cout << "Stänger ned program " << endl;
            }

        if (cin.fail()) {
            cout << "Felaktig input " << endl;
        } else {
            cout << "Första kordinatens värde : " << cordinateOneX << "." << cordinateOneY << endl
                 << "Andra kordinatens värde  : " << cordinateTwoX << "." << cordinateTwoY << endl;
        }

        cout << "Vill du räkna ut avståndet? " << endl
             << "Skriv       ja |         fortsätta"<< endl
             << "Skriv      nej |    nya kordinater" << endl
             << "Skriv      exit| stäng  programmet" << endl;
        cin  >> ifCalculate;

        if (ifCalculate == "ja") {
            break;
        } else if (ifCalculate == "exit") {
            cout << "Programmet stängs ned" << endl;
            return 0;
        }
    }

    cout << " Nu räknas talet " << endl;

    /*
    Räkna ut resultDistance genom
    cordinateTwoX - cordinateOneX = längdenhet
    cordinateTwoY - cordinateOneY = höjdenhet

    (längdenhet * längdenhet) + ( höjdenhet * höjdenhet) = resultCalc

    roten ur resultCalc = resultDistance

    */
    aUnit = cordinateTwoX - cordinateOneX;
    bUnit = cordinateTwoY - cordinateOneY;

    distancePow = (aUnit * aUnit) + (bUnit * bUnit);

    resultDistance = sqrt(distancePow);

    cout << "Avståndet mellan punkterna är :" << resultDistance << "längdenheter" <<endl;

    return 0;

}