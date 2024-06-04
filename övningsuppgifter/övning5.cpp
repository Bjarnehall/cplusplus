// Konstruera ett program som liknar det i Övning 4, men programmet skall istället utföra en
// division av två reella tal. Som resultat skall följande sträng skrivas ut på skärmen: "Om du
// dividerar X med Y så blir kvoten Z". Där X, Y och Z står för det första inmatade talet, det
// andra inmatade talet resp. kvoten av de två inmatade talen.


/*
Bryt ned problemet.
Fråga efter tal ett
Spara värde för tal ett som x
Fråga efter tal två
Spara värde för tal två som y

Dividera x med y
Spara som z

Skriv ut "om du dividerar (x) med (y) så blir kvoten (z)"
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Ange tal ett   ";
    cin >> x;
    cout << "Ange tal två   ";
    cin >> y;

    z = x / y;

    cout << "Om du dividerar " << x << " med " << y << " blir kvoten " << z << endl;
    return 0;
}