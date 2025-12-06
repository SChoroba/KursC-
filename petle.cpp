#include<iostream>
#include<string>

using namespace std;

int main()
{
    for (int i = 1; i < 11; i++) {
        cout << i<<endl;
   }

    cout << "=====================================" << endl;

    for (int p = 1; p <= 20; p++) {
        if (p % 2 == 0) {
            cout << p<<endl;
        }

    }

    cout << "=====================================" << endl;

    for (int r = 100; r >= 0; r--) {
        cout << r << " " << endl;
    }
    // od 1 do 100
    cout << "=====================================" << endl;

    for (int l = 1, suma = 0; l <= 100; l++) {
        suma += l;
        cout << suma << " " << endl;
    }

    cout << "=====================================" << endl;

    for (int k = 1; k < 10; k++) {
        cout << k * k << endl;
    }

    int cyfra = 1;
    do {
        cout << "Zgadnij cyfrę";
        cin >> cyfra;

    } while (cyfra != 0);
    cout << "Podaj silnie do obliczenia przez program: ";
    int silna_uzytkownika;
    cin >> silna_uzytkownika;
    long long wynik = 1;
    for (int silna = 1;  silna <= silna_uzytkownika; silna++) {
        wynik *= silna;

    }

    cout << wynik << endl;
    cout << "=====================================" << endl;
    int zoma = 0;
    for (int odjencie = 4; odjencie > 0; odjencie--) {
        zoma = zoma + odjencie;

    }
    cout << zoma;

    cout << rev * zoma;
    return 0;
}
