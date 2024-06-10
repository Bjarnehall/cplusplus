//Skapa ett program som avgör vilken bilförsäkrning som
//ska rekomenderas beroende på en bils ålder.
//För bilar nyare än 5 år = Helförsäkring
//För bilar äldre än 5 år = Halvförsäkring
//För bilar äldre än 25 år = Veteranbilsförsäkring
//Programmet ska fråga efter bilens ålder och låẗa användaren ange detta
//Programmet ska sedan föreslå en försäkring enlig:
//    Välj en helförsäkring
//    Välj en halvförsäkring
//    Välj en veteranbilsförsäkring
#include <iostream>
using namespace std;

int main()
{
    int bil_alder, ar;
    cout << "Ange innevarande år:    " << endl;
    cin  >> ar;
    cout << "Ange bilens årsmodell:    " << endl;
    cin  >> bil_alder;

        if (ar-bil_alder <=5) {
            cout << "Välj en helförsäkring." << endl;
        } else if (ar-bil_alder <=25) {
            cout << "Välj en halvförsäkring." << endl;
        } else {
            cout << "Välj en veteranbilsförsäkring." << endl;
        }
    return 0;
}