// Detta program sparar 10 tal som användaren delger
// sparar dessa i en array och räknar sedan ut medelvärde
// samt skriver ut de tal som överstiger medelvärdet
// För referens så är (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10)/10=5.5
// Medelvärdet är 5.5 och talen 6, 7, 8, 9, 10 är över medelvärdet.

#include <iostream>
using namespace std;
int main()
{
    const int antalet = 10;
    double medelv, sum = 0;
    double serien[antalet];
    int i;
    cout << "Ange mätvärden" << endl;
    for (i = 0; i<antalet; i++)
    {
        cin >> serien[i];
        sum += serien[i];
    }
    medelv = sum / antalet;
    cout << "Medelvärdet är " << medelv << endl;
    cout << "Mätningar större än medelvärdet:" << endl;
    for (i = 0; i<antalet; i++)
    if (serien[i] > medelv)
        cout << "Mätning nr " << (i+1) << " är "
             << serien[i] << endl;
    return 0;
}