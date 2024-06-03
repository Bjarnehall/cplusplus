// Övning 2 samt 3


// Konstruera ett program som läser in ett tal till en heltalsvariabel och sedan skriver ut talet
// på skärmen, med den inledande texten: "Talet du matade in var X". Där X motsvarar det
// inmatade talet. Prova att ge ett realtal som 12.345 till programmet. Vad händer?


//Nedbrytning av problemet

//Läs in ett tal av användaren angivet
//Skriv ut talet tillsammans med texten "Talet du matade in var X" X = inmatade talet

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Ange ett heltal    ";
    cin >> x;
    cout << "Talet du matade in var " << x << endl;
    return 0;
}

//Testa mata in 12.345

//Resultat
//När användaren matar in ett hel tal ges detta tillbaka
//När användaren matar in ett decimal tal anges talet utan decimaler talet avrundas ej uppåt
//så både 12.345 samt 12.678 resulterar i talet 12.

/**
Kommentar
För att skriva ut ett decimaltal ändra följande
int x = heltal
double x = decimaltal
*/