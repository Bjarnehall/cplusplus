/*
Detta program räknar ut kostnaden för att
hyra en vara utifrån användarens uppgifter

programmet översätter även angiven 
växlingskurs samt lägger till en 
fast skatt på 10 för att simulera
en biluthyrning på en semesterort
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Deklarera variabler
    int dag_antal, dagspris, tot_pris;
    const int skatt = 10;
    double    kurs;
    //Hantera in ut data
    cout << "Önskar att hyra antal dagar?   ";
    cin  >> dag_antal;
    cout << "Pris per dag?                  ";
    cin  >> dagspris;
    cout << "Växlingskurs?                  ";
    cin  >> kurs;
    //Räkna ut variabel för totalt pris
    tot_pris = skatt + dag_antal * dagspris;
    //Presentera totalt pris i euro och kr
    cout << "Totalt pris: " << tot_pris << " euro"
        //Sätter ett värde för antal decimaler att visas till två
         << fixed << setprecision(2)
         << " (" << tot_pris*kurs << " kr )"<<endl;
    return 0;
}