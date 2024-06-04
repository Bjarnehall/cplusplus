/*
1.3 Övningsuppgifter
--------------------

1. Försök att ta reda på följande för det datorsystem du tänker utnyttja:
Vilket operativsystem används?
Vilken C++ kompilator eller C++ utvecklingsmiljö skall användas?
Vilka andra programspråk, förutom C++, finns tillgängliga?

Under kursens gång kommer jag att använda mig av en linuxdistributionen Ubuntu 
dels i form av en full installation på min stationära dator men även som en WSL 
installation i min bärbara Windows dator. Jag avser att använda mig av 
kompilatorn GNU vilken jag installerat och testat på båda mina maskiner. Genom 
att köra texteditorn Visual Studio Code tillsammans med GNU i terminalen har 
jag en komplett miljö för denna uppgift. Förutom C++ finns en mängd andra 
programspråk tillgängliga men med denna miljö där just denna kompilator används 
är det programmeringsspråket C som ligger närmast till hands då det går att 
köra i samma kompilator.

2. Skriv ett C++ program som skriver ut ditt namn och din adress i 
kommandofönstret. Kompilera, länka och provkör programmet med hjälp av den 
kompilator eller programutvecklingsmiljö du tänker använda.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Jonas Bjarnehall" << endl;
    cout << "Vitared Ringvägen 29 Tidaholm" << endl;
    return 0;
}