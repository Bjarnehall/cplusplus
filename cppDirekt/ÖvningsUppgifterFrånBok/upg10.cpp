/*
Skriv ett program som räknar många procent av isotop 14C som
återstår efter S antal år. 

Halveringstiden för 14C är 5730 år.
Tiden S ges som indata av användaren.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main ()

{
    cout << "To find out how much of the radioaktive material is left enter years: " << endl;

    int years;
    cin >> years;

    const double half_life = 5730;

    double remaining_fraction = pow(0.5, years / half_life);
    double result = remaining_fraction * 100;

   cout << result << "%" << endl;

   return 0;

}
