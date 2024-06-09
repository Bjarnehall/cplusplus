#include <iostream>
using namespace std;

//Programmer tar ett godtyckligt antal tal skriver ut det största samt medelvärdet av alla tal

int main()
{
    double tal, max_tal = -1, sum = 0;
    int    n = 0;
    cout << "Ange de olika tal för att sedan få fram största och medelvärde av alla tal " << endl;
    cout << "För att avsluta talinmatning skriv en bokstav " << endl;
    while  (cin >> tal)
    {
        sum += tal;
        n++;
        if (tal > max_tal)
            max_tal = tal;
    }
    cout << "Största tal: " << max_tal << endl
         << "Medelvärde:  " << sum / n << endl;
}