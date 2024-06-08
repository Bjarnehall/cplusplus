#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double b, r;
    int n;
    cout <<"Belopp?         "; cin >> b;
    cout <<"Ränta?          "; cin >> r;
    cout <<"Antal år?       "; cin >> n;
    cout << setprecision(2)   << fixed
         <<"Kapitalet blir  " << b*pow(1+r/100, n) << endl;
    return 0;
}