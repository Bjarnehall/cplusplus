// Program för att räkna ut om kund har rätt till 10 % rabbat vid köp över 1000kr

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int antal;
    double per_st, pris, rabbat;
    const double rabbat_proc1 = 10, grans1 = 1000,
                 rabbat_proc2 = 15, grans2 = 5000;
    cout << "Antal enheter? "; cin >> antal;
    cout << "Pris per st?   "; cin >> per_st;
    pris = per_st * antal;
        if (pris > grans2) {
        rabbat = pris * rabbat_proc2 / 100;
        pris   = pris - rabbat;
        cout << "Du är en bra kund, du får 15 % rabbat" << endl;
            } else if (pris > grans1) {
                rabbat = pris * rabbat_proc1 / 100;
                pris   = pris - rabbat;
                cout << "Du får 10 % rabbat" << endl;
                } else {
                    cout << "Ingen rabbat" << endl;
                }
    cout << "Priset blir:   "
         << setprecision(2) << fixed << pris << endl;
}