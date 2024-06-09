// En algoritm för att söka i en array genom att börja med
// det minsta talet sedan det näst  minsta osv.. tills dess
// att sökt tal stämmer överens med nuvarande tal.

#include <iostream>
using namespace std;
int main()
{
    const int max_antal = 100;
    int f[max_antal], n = 0; // n är antalet inlästa tal
    cout << "Skriv in högst " << max_antal
         << " heltal" << endl;
    while ( n < max_antal && cin >> f[n])
    n++;
    // Sortera fältet
    for (int k = 0; k < n; k++)
    {
      // Leta reda på minsta bland talen nr k till n-1
        int m = k;
        for (int i = k+1; i < n; i++)
        if (f[i] < f[m])
            m = i;
        // låt talen nr k och m byta plats
        int temp = f[k];
        f[k] = f[m];
        f[m] = temp;
    }
    // Skriv ut det sorterade fältet
    for (int j=0; j<n; j++)
        cout << f[j] << ' ';
}