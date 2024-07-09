/*
**9** Kopiatorn<br>
Skriv ett program som av användaren angiven text-sträng kopierar värdet
till en annan variabel som printas ut till användaren texten ska även 
kopieras till en tredje variabel där den sparas och presenteras baklänges.

Ex: 
    Enter your name
    Jons
    Your name is       : Jonas
    Your name backwards: sanoJ
*/

#include <iostream>
#include <string>
// Part of alternative solution 
// #include <algorithm>

using namespace std;


string s1;
string s2;
string s3;

int main() 
{
    cout << "Enter your name: " << endl;
    cin  >> s1;

    s2 = s1;

    cout << "Your name is " << s2 << endl;

    /*code to present name backwards*/

    s3 = "";
    for (int i = s1.length() -1; i >= 0; i--)
    {
        s3 += s1[i];
    }

    // Part of alternative solution
    // s3 = s1;
    // reverse(s3.begin(), s3.end());

    cout << "Your name backwards is: " << s3 << endl;

}