/*
Skapa ett program som översätter amerekanska miles/gallon till liter/mil

en mile = 1.609 km
en gallon = 3,785 liter
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int miles_per_gallon;
    double km_per_mil;
    double mil_per_liter;
    double liter_per_mil;
    // Input från användare
    cout << "Ange miles per gallon:    " << endl;
    cin  >> miles_per_gallon;
    // Beräkning
    km_per_mil = miles_per_gallon * 1.609 / 3.785;
    liter_per_mil = 100 / (km_per_mil * 10);
    // Resultat
    cout << setprecision(3) << liter_per_mil << " l/mil" << endl;
    return 0;
}