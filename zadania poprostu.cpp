#include<iostream>
#include<string>

using namespace std;


int test[6];

int main()
{
    int mies;
    cout << "Podaj miesiąc w liczbie: ";
    cin >> mies;
    switch (mies) {
    case 1:
        cout << "Styczeń" << endl;
        break;
    case 2:
        cout << "Luty" << endl;
        break;
    case 3:
        cout << "Marzec" << endl;
        break;
    case 4:
        cout << "Kwiecień" << endl;
        break;
    case 5:
        cout << "Maj" << endl;
        break;
    case 6:
        cout << "Czerwiec" << endl;
        break;
    case 7:
        cout << "Lipiec" << endl;
        break;
    case 8:
        cout << "Sierpień" << endl;
        break;
    case 9:
        cout << "Wrzesień" << endl;
        break;
    case 10:
        cout << "Październik" << endl;
        break;
    case 11:
        cout << "Listopad" << endl;
        break;
    case 12:
        cout << "Grudzień" << endl;
        break;
    default:
        cout << "Podana liczba miesiąca nie istnieje" << endl;
        break;
    }

    cout << "====================================" << endl;

    cout << "Witaj w kalkulatorze" << endl << "Co chcesz zrobhić?: " << endl << "1)Dodawanie 2)Odejmowanie 3)Mnożenie 4)Dzielenie" << endl;
    int działanie;
    cin >> działanie;
    int a = 0;
    int b = 0;
    switch (działanie) {
    case 1:
        cout << "Podaj a" << endl;
        cin >> a;
        cout << "Podaj b" << endl;
        cin >> b;
        cout << (a + b);
        break;
    case 2:
        cout << "Podaj a" << endl;
        cin >> a;
        cout << "Podaj b" << endl;
        cin >> b;
        cout << (a - b);
        break;
    case 3:
        cout << "Podaj a" << endl;
        cin >> a;
        cout << "Podaj b" << endl;
        cin >> b;
        cout << (a * b);
        break;
    case 4:
        cout << "Podaj a" << endl;
        cin >> a;
        cout << "Podaj b" << endl;
        cin >> b;
        cout << (a / b);
        break;
    default:
        cout << "Podano niepoprawne działanie" << endl;
    }

    cout << "====================================" << endl;

    cout << "Podaj swoją ocenę: " << endl;
    int ocena = 0;
    cin >> ocena;
    switch (ocena) {
    case 1:
        cout << "brak promocji do następnej klasy" << endl;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "promocja do następnej klas" << endl;
        break;
    case 6:
        cout << "promocja z ocena celująca" << endl;
        break;
    }

    cout << "====================================" << endl;

    int kolokwium = 0;
    cout << "Podaj ilość punktów: " << endl;
    cin >> kolokwium;
    if (kolokwium >= 0 && kolokwium <= 18) {
        switch (kolokwium) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "2" << endl;
            break;
        case 11:
        case 12:
        case 13:
            cout << "3" << endl;
            break;
        case 14:
        case 15:
        case 16:
            cout << "4" << endl;
            break;
        case 17:
        case 18:
            cout << "5" << endl;
            break;
        }
    }
    else {
        cout << "Podałeś ilość punktów nie w zakresie" << endl;
    }

    double kwota = 0;
    cout << "Podaj kwotę pieniędzy w zł: " << endl;
    cin >> kwota;
    if (kwota < 0){
        cout << "Podano niepoprawną ilość pieniędzy";
    }
    else if (kwota == 0) {
        cout << "Kwota nie może byc równa 0";
    }
    else {
        int waluta = 0;
        cout << "Podaj na jaką walutę chcesz to zamienić";
        cin >> waluta;
        switch (waluta) {
            //funty
        case 1:
            kwota *= 0.20;
            break;
            //dolary
        case 2:
            kwota *= 0.2754;
            break;
            //euro
        case 3:
            kwota *= 0.2364;
            break;
        }
        cout << kwota;
    }

    return 0;
}
