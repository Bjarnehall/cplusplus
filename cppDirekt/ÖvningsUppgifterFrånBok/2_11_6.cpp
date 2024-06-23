/*
Skriv ett program som beräknar hur mycket växel som ska ges tillbaka
när man handlat samt i vilka sedlar och mynt växeln ska utbetalas.

Indata till programmet skall vara det pris man skall betala samt
 vilket belopp som ges i betalning.
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    int totalt_pris, totalt_belopp, summa_vaxel, extra_sedlar;
    extra_sedlar = 0;

    cout << "" << endl
         << "Välkomme till Bosses kiosk!" << endl
         << "==============================================================" << endl
         << "Vi använder oss här av självutcheckning, ange totala priset " << endl
         << "på varorna. Mata sedan in sedlar och ange totala beloppet du " << endl
         << "betalt så får du din växel tillbaka i korekkt valörer " << endl
         << "--------------------------------------------------------------" << endl
         << "Ange totalt pris för varor:                           "; cin >> totalt_pris;

    //cin  >> totalt_pris;
    cout << "--------------------------------------------------------------" << endl
         << "Det totala priset är      : " << setw(29) << totalt_pris << " kr " << endl
         << "--------------------------------------------------------------" << endl
         << "Ange belopp att betala    :                           "; cin >> totalt_belopp;

    //cin  >> totalt_belopp;

    if (totalt_pris > totalt_belopp) {
        cout << "Du har inte betalt tillräckligt för varorna! " << endl
             << "===========================================================" << endl
             << "Priset för varorna är " << setw(35) << totalt_pris << " kr " << endl
             << "Du har betalt " << totalt_belopp << " kr " << endl
             << "-----------------------------------------------------------" << endl
             << "Vänligen mata in extra sedlar " << endl;
        cin  >> extra_sedlar;
    }
    // Beräkning
    totalt_belopp = totalt_belopp + extra_sedlar;
    summa_vaxel = totalt_belopp - totalt_pris;

    cout << "---------------------------------------------------------------" << endl
         << "Du får tillbaka " << summa_vaxel << " kr " << endl;

    /*
    Dela upp växeln i olika valörer
    aktuella valörer i kassa systemet
    100 kr sedel
    50 kr sedel
    20 kr sedel
    10 kr mynt
    5 kr mynt
    1 kr mynt
    */
    // dela upp summa_vaxel i de olika valörerna där högsta möjliga
    // valör betlas ut i första hand. Till exempel om:
    // summa_vaxel = 387 så ges vaxel tillbaka i, 3st 100kr sedlar, 1 st 50 kr sedel, 1 st 20 kr sedel, 1 t 10 kr mynt, 1 st 5kr mynt, 2 st en kr mynt.
    int valorer[] = {100, 50, 20, 10, 5, 1};
    int antal_valorer[] = {0, 0, 0, 0, 0, 0,};
    int antal_valorer_storlek = sizeof(valorer) / sizeof(valorer[0]);

    for (int i = 0; i < antal_valorer_storlek; ++i) {
        antal_valorer[i] = summa_vaxel / valorer[i];
        summa_vaxel %= valorer[i];
    }

    cout << "växeln ges ut i följande valörer:" << endl;
    for (int i = 0; i < antal_valorer_storlek; ++i) {
        if (antal_valorer[i] > 0) {
            cout << antal_valorer[i] << " st " << valorer[i] << " kr" << endl;
        }
    }

    return 0;
}




