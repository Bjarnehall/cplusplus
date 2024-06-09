#include <iostream>
#include <iomanip>

using namespace std;

int main()
    {
    int ant_dagar = 1 ;
    double dagslon = 0.01, totalt_belopp = 0.01;
    const double onskat = 1000000.0;
        while (totalt_belopp < onskat)
        {
        ant_dagar++;
        dagslon *= 2;
        totalt_belopp += dagslon;
        }
    cout << "Du blir miljonär efter "
         << ant_dagar << " dagar" << endl;
    }
