// Övning 4

// Konstruera ett program som adderar två tal. Programmet skall först "fråga" efter talen, dvs
// "Mata in tal ett: " och "Mata in tal två: ". Efter resp. fråga skall talen läsas in till varsin
// heltalsvariabel. De två heltalsvariablerna skall därefter adderas och resultatet placeras i
// ytterligare en heltalsvariabel för att skrivas ut på skärmen med texten: "Summan av X + Y
// ar Z". Där X, Y och Z står för det första inmatade talet, det andra inmatade talet resp.
// summan av de två inmatade talen.

/**
Bryt ned problemet

Be användaren att mata in två heltal i form av:
Mata in tal ett:
Mata in tal två:
Läs in svar och spara i varibler x, y
addera variablerna
spara summan i en tredje variabel
skriv sedan ut svarstext till användaren i form av:
Summan av x + y är z.
*/
/**
Lösning
*/
#include <iostream>
using namespace std;

int main()
{
    //deklarera variabler
    int x, y, z;
    //fråga användaren
    cout << "Mata in tal ett" << endl;
    cin >> x;
    cout << "Mata in tal två" << endl;
    cin >> y;
    //addera tal ett och två
    z = x + y;
    //skriv ut resultat
    cout << "Summan av  " << x << " + " << y << " är lika med " << z << endl;
    return 0;
}

/**
Kommentar
Detta program adderar två av användaren angivna tal och skriver ut resultatet
*/