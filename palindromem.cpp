#include<iostream>
#include<string>

using namespace std;


int test[6];

int main()
{
    string słowo;
    cout << "Podaj słowo do sprawdzenia odwrócenia: " << endl;
    cin >> słowo;
    string odwrocenie = słowo;

    reverse(odwrocenie.begin(), odwrocenie.end());
    if (słowo == odwrocenie) {
        cout << "Słowa są palindromenem" << endl;
    }
    else {
        cout << "Słowa nie sa palindromenami";
    }
    return 0;
}
