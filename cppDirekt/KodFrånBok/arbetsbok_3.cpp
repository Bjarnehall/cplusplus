#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int j;
    j = 0;
    while (j < 6)
    {
        cout << setw(3) << j;
        j += 2;
    }
    cout << " " << endl;
}