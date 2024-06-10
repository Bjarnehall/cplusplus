
/*
Skriv ett program som beräknar och skriver ut hur många mil en bil har gått under det senaste året.
Samt dess bräsnleförbrukning med hjälp av input från användaren.
När programmet körs skall det fråga efter dagens mätarställning och mätarställningen för ett år
sedan. De två mätarställningarna skall anges som hela antal mil.
 */
#include <iostream>
using namespace std;

int main()
{
      int dagens_matarstallning, davarande_matarstallning, mil_under_aret;
      double totalt_bransle;
      double forbrukning;
      cout << "Ange dagens mätarställning    " << endl;
      cin  >> dagens_matarstallning;
      cout << "Ange mätarställning ett år tillbaka från dagens mätarställning    " << endl;
      cin  >> davarande_matarstallning;
      cout << "Totalt tankade liter bensin    " << endl;
      cin  >> totalt_bransle;
      mil_under_aret = dagens_matarstallning - davarande_matarstallning;
      cout << "Antal körda mil:     " << mil_under_aret << endl;
      cout << "Antal liter bensin:  " << totalt_bransle << endl;
      forbrukning = totalt_bransle/mil_under_aret;
      cout << "Förbrukning per mil: " << forbrukning << endl;
      return 0;
}

