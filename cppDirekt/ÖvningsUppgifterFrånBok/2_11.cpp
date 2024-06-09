
/*
Skriv ett program som beräknar och skriver ut hur många mil en bil har gått under det senaste året.
När programmet körs skall det fråga efter dagens mätarställning och mätarställningen för ett år
sedan. De två mätarställningarna skall anges som hela antal mil.
 */
#include <iostream>
using namespace std;

int main()
{
      int dagens_matarstallning, davarande_matarstallning, mil_under_aret;
      cout << "Ange dagens mätarställning    " << endl;
      cin  >> dagens_matarstallning;
      cout << "Ange mätarställning ett år tillbaka från dagens mätarställning    " << endl;
      cin  >> davarande_matarstallning;
      mil_under_aret = dagens_matarstallning - davarande_matarstallning;
      cout << "Bilen har det senaste året gått " << mil_under_aret << " mil " << endl;
      return 0;
}

