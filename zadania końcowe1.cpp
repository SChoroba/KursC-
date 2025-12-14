#include<iostream>
#include<string>

using namespace std;

int tablica[10];
// system("cls");
int main() {
    string imie;
    int wiek;
    cout << "============ZADANIE1============" << endl;
    cout << "Podaj swoje imię: " << endl;
    cin >> imie;
    cout << "Podaj swój wiek: " << endl;
    cin >> wiek;
    cout << "Cześć " << imie << ", za rok będziesz mieć " << (wiek + 1) << " lat." << endl;

    cout << "============ZADANIE2============" << endl;
    int liczba;
    cout << "Podaj liczbę do sprawdzenia: " << endl;
    cin >> liczba;
    if (liczba > 0) {
        cout << "Liczba jest dodatnia" << endl;
    }
    else if( liczba < 0 ){
        cout << "Liczba jest ujemna" << endl;
    }
    else if( liczba == 0) {
        cout << "Liczba jest równa 0" << endl;
    }
    cout << "============ZADANIE3============" << endl;
    for (int i = 0; i <= 100; i ++) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
    }
    cout << "============ZADANIE4============" << endl;
    int odp = 100;
    int sumaodp = 0;
        while (odp < 0 || odp > 0 ) {
            cout << "Prosze zgadniecie liczby" << endl;
            cin >> odp;
            sumaodp += odp;
    }
        cout << "Podales poprawna odpowiedz!!"<< endl;
        cout << "Suma twoich odpowiedzi to: " << sumaodp << endl;

        cout << "============ZADANIE5============" << endl;
        cout << "Podaj numer dnia tygodnia" << endl;
            int dni = 0;
            cin >> dni;

            switch (dni) {
            case 1:
                cout << "Poniedzialek" << endl;
                break;
            case 2:
                cout << "Wtorek"<< endl;
                break;
            case 3:
                cout << "sroda" << endl;
                break;
            case 4:
                cout << "czwartek" << endl;
                break;
            case 5:
                cout << "piatek" << endl;
                break;
            case 6:
                cout << "sobota" << endl;
                break;
            case 7:
                cout << "niedziela" << endl;
                break;
            default:
                cout << "Podano niepoprawny dzien" << endl;
                break;
        }
        cout << "============ZADANIE6============" << endl;
        int tablica[5];
        for (int i = 0; i < 5; i++) {
            cout << "Podaj liczbę " << i << " do tabeli"<< endl;
            cin >> tablica[i];
        }
        int srednia = 0;
        int suma = 0;
        cout << "Podałeś: ";
        for (int i = 0; i < 5; i++) {
            cout << tablica[i] << " "<< endl;
            suma += tablica[i];
            
        }
        cout << "suma to: " << suma<< endl;
        cout << "srednia to :" << (suma / 5)<< endl;
        cout << "============ZADANIE7============" << endl;
        int tablicaa[10];
        
        for (int i = 0; i < 10; i++) {
            cout << "Prosze podac " << i+1 << " liczbe: ";
            cin >> tablicaa[i];
        }
        int dodatnie = 0;
        int ujemne = 0;
        int rowne = 0;
        for (int i = 0; i < 10; i++) {
            if (tablicaa[i] > 0) {
                dodatnie += 1;
            }
            else if(tablica[i] < 0){
                ujemne += 1;
            }
            else if (tablica[i] == 0) {
                rowne += 1;
            }

        }
        cout << "Podales :" << endl << "Dodatnie: " << dodatnie << endl << "Ujemne: " << ujemne << endl << "Rowne 0: " << rowne << endl;

        cout << "============ZADANIE8============" << endl;
        int tabliczka[8];
        for (int i = 0; i < 8; i++) {
            cout << "Prosze podac " << i + 1 << " liczbe do tebelki: " <<endl;
            cin >> tabliczka[i];
        }
        int  najwiekszy = tabliczka[1];
        int najmniejszy = tabliczka[1];
        for (int i = 0; i < 8; i++) {
            if (tabliczka[i] > najwiekszy) {
                najwiekszy = tabliczka[i];
            }
        }
        for (int i = 0; i < 8; i++) {
            if (tabliczka[i] < najmniejszy) {
                najmniejszy = tabliczka[i];
            }
        }
        cout << "Największa z podanych liczb to: " << najwiekszy << endl;
        cout << "Najmniejsza z podanych liczb to: " << najmniejszy << endl;
        system("pause");
        int dzialanie = 1;
        while (dzialanie != 0) {
            system("cls");
            cout << "============ZADANIE9============" << endl;
            cout << "===Menu==="<< endl;
            cout << "1. Dodawanie" << endl;
            cout << "2. Odejmowanie" << endl;
            cout << "3. Mnozenie" << endl;
            cout << "4. Dzielenie" << endl;
            cout << "0. Koniec" << endl;
            int a = 0;
            int b = 0;
            cin >> dzialanie;
            switch (dzialanie) {
            case 1:
                cout << "Prosze podać liczbe" << a << endl;
                cin >> a;
                cout << "Prosze podac liczbe" << b << endl;
                cin >> b;
                cout << "Suma to: " << a + b << endl;
                system("pause");
                break;
            case 2:
                cout << "Prosze podac liczbe" << a << endl;
                cin >> a;
                cout << "Prosze podac liczbe" << b << endl;
                cin >> b;
                cout << "Po odjenciu to: " << a - b << endl;
                system("pause");
                break;
            case 3:
                cout << "Prosze podac liczbe" << a << endl;
                cin >> a;
                cout << "Prosze podac liczbe" << b << endl;
                cin >> b;
                cout << "Mnożenie: " <<a * b << endl;
                system("pause");
                break;
            case 4:
                cout << "Prosze podac liczbe" << a << endl;
                cin >> a;
                cout << "Prosze podac liczbe" << b << endl;
                cin >> b;
                cout << "Dzielenie: " << a / b << endl;
                system("pause");
                break;
            case 5:
                break;
            default:
                break;
            }

        }
        system("cls");
        cout << "============ZADANIE10============" << endl;
        int zadao[10];

        for (int i = 0; i < 10; i++) {
            cout << "Prosze podac " << i + 1 << " ocene do tebelki: " << endl;
            cin >> zadao[i];
            if (zadao[i] < 1 || zadao[i] > 6) {
                cout << "Podano błędą ocenę"<< endl;
                cout << "Zmiana w 0" << endl;
                    zadao[1] = 0;
            }
        }
        int sumka = 0;
        for (int i = 0; i < 10; i++) {
            sumka += zadao[i];
        }
        cout << sumka / 10;
        int suman = 0;
        int sumad = 0;
        int sumac = 0;
        for (int i = 0; i < 10; i++) {
            if (zadao[i] == 1) {
                suman += 1;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (zadao[i] == 5) {
                sumad += 1;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (zadao[i] == 6) {
                sumac += 1;
            }
        }
        cout << "Ocen niedostatecznych jest: " <<  suman << endl;
        cout << "Ocen bardzo dobrych jest: " << sumad << endl;
        cout << "Ocen celujacych jest: " << sumac << endl;

            
            return 0;
}
