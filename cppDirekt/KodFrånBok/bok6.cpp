// Proram för att räkna ut hypotenusans längd i en rätvinklig triangel
// Med hjälp av Pythagoras sats
// Exempel för att testa så har en triangel med kateterna 4 och 3 en
// Hypotenusa på 5 enlig 4² + 3² = 25 roten ur 25 blir 5
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    while (true)
    {
        cout << "Ange kateternas längder. " <<
                "Avlusta med Ctrl-d. " << endl;
        if(!(cin >> a))
            break;
        if(!(cin >> b))
            break;
        c = sqrt(a*a+b*b);
        cout << "Hypotenusan har längden " << c << endl;
    }
    return 0;
}