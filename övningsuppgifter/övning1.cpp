// Övning 1 (sekvens)
// Konstruera ett program som skriver ut teckensträngen "Hello world" på skärmen. Först ska
// programmet generera 2 blankrader, därefter teckensträngen och till sist 3
// blankrader. Kontrollera antalet utskrivna rader noga.

#include <iostream>
using namespace std;
int main()
{
    // Generera 2 tomma rader
    cout << endl;
    cout << endl;

    // Skriv ut "Hello world"
    cout << "Hello world" << endl;

    // Generera 3 tomma rader
    cout << endl;
    cout << endl;
    cout << endl;

    return 0;
}