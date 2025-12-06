#include<iostream>
#include<string>

using namespace std;

int main()
{
    int pierwsza_liczba, druga_liczba, trzecia_liczba;
    cout << "Podaj pierwszą liczbę: ";
    cin >> pierwsza_liczba;
    cout << "Podaj drugą liczbę: ";
    cin >> druga_liczba;
    cout << "Podaj trzecią liczbę: ";
    cin >> trzecia_liczba;

 

    cout << "Średnia " << (pierwsza_liczba + druga_liczba + trzecia_liczba) / 3.0<<endl;


    cout << "=====================================" << endl;


    double radius;
    const double pi = 3.14;
    cout << "Podaj r: ";
    cin >> radius;
    double pole = pi * radius * radius;
    cout << "Pole to: " << pole << endl;

    cout << "=====================================" << endl;

    float stopnie_celciusza, stopnie_f;

    cout << "Podaj stopnie Celciusza ";
    cin >> stopnie_celciusza;

    stopnie_f = (stopnie_celciusza * 1.8 + 32);
    cout << stopnie_f << endl;

    cout << "=====================================" << endl;

    double cena_benzyny, koszt;

    cout << "Podaj Koszt Benzyny ";
    cin >> cena_benzyny;
    double litr = (9.0 / 100.0) * 335;

    koszt = litr * cena_benzyny;
    cout << koszt <<endl;


    cout << "=====================================" << endl;


    double cena_benzynyw, kosztw, dlugosc, spalanie;

    cout << "Podaj Koszt Benzyny własnej ";
    cin >> cena_benzynyw;
    cout << "Podaj długość ";
    cin >> dlugosc;
    cout << "Podaj spalanie na 100km ";
    cin >> spalanie;
    double litrw = (spalanie / 100.0) * dlugosc;

    kosztw = litrw * cena_benzynyw;
    cout << kosztw << endl;

    return 0;
}