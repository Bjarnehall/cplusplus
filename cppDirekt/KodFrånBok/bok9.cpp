// Detta programmet räknar ut försäljares belopp de sålt för
// samt deras arvode vilket är 10% eller om summan överstiger
// 50000 15 % på den summa som överstiger 50000.
// Programmet tar indata från användaren i form av:
// anställningsNr på försäljare 1-100;
// Belopp;
// Sedan presenterar det följande enlig en tabell i exempel
// Nummer    Belopp    Arvode
// ======    ======    ======
// 2         13000     1300
// 5         60000     6500
// Använd crtl-d för att markera slut på indata
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int    maxantal=100;
    const float  grans=50000., pro1=0.1, pro2=0.15;
    float tab[maxantal], belopp, arvode;
    int    i, nr;
    // Nollställ tabellen
    for (i=0; i<maxantal; i++)
        tab[i] = 0;
    // Läs in försäljningsuppgifter
    while(cin >> nr && cin >> belopp)
    {
        if (nr < 1 || nr > maxantal || belopp < 0)
        cout << "Felaktiga indata" << endl;
        else
            tab[nr-1] += belopp;
    }
    // skriv sammanställning
    cout << endl
         << "Nummer    Belopp    Arvode" << endl
         << "======    ======    ======" << endl;
    for (i=0; i<maxantal; i++)
    {
        if (tab[i] > 0)
        {
            if (tab[i] <= grans)
                arvode = pro1 * tab[i];
            else
                arvode = pro1*grans + pro2*(tab[i]-grans);
            cout << setw(4) << (i+1) << setprecision(0) << fixed
                 << setw(13) << tab[i] << setw(10) << arvode << endl;
        }
    }
    return 0;
}