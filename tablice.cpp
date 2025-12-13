#include<iostream>
#include<string>

using namespace std;

int cyfry[] = {
    1, 2, 3, 4, 5
};

int suma[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10
};

int cyfryodwrotne[] = {
    1, 2, 3, 4, 5, 6, 7, 8
};

int srednia[] = {
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10
};

int main()
{
    for (int zakres = 0; zakres < 5; zakres++) {
        cout <<  "podaj cyfrę: "<<endl;
        int a;
        cin >> a;
        cyfry[zakres] = a;
    }
    for (int zakres = 0; zakres < 5; zakres++) {
        cout << cyfry[zakres] << endl;
    }

    for (int zakres = 0; zakres < 10; zakres++) {
        cout << "podaj cyfrę do sumy: ";
        int a;
        cin >> a;
        suma[zakres] = a;
    }

    int ssuma = 0;
    for (int zakres = 0; zakres < 10; zakres++) {

        ssuma += suma[zakres];

    }
    cout << ssuma << endl;

    for (int zakres = 0; zakres < 8; zakres++) {
        cout << "podaj cyfrę do odwrotnej pętli : " << endl;
        int a;
        cin >> a;
        cyfryodwrotne[zakres] = a;
    }
    for (int zakres = 7; zakres >= 0; zakres--) {
        cout << cyfryodwrotne[zakres]<<endl;
    }
    
    int tab1[5], tab2[5];

    cout << "Podaj 5 liczb do pierwszej tablicy:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> tab1[i];

    }

    cout << "Podaj 5 liczb do drugiej tablicy:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> tab2[i];

    }

    bool sprawdz = true;
    for (int i = 0; i < 5; i++)
    {
        if (tab1[i] != tab2[i]) {
            sprawdz = false;
            break;
        }
    }

    if (sprawdz)
        cout << "Tablice sa identyczne"<<endl;
    else
        cout << "Tablice nie sa identyczne"<<endl;

    for (int zakres = 0; zakres < 10; zakres++) {
        cout << "podaj cyfrę: " << endl;
        int a;
        cin >> a;
        srednia[zakres] = a;
    }
    double sredniasuma = 0;
    for (int zakres = 0; zakres < 10; zakres++) {

        sredniasuma += srednia[zakres];

    }
    double wyniksredniej = sredniasuma / 10.0;
    cout << "wynik średniej" << wyniksredniej << endl;
    cout << "wieksze od średniej są: "<< endl;
    for (int zakres = 0; zakres < 10; zakres++) {
        if (wyniksredniej<srednia[zakres]) {
            cout << srednia[zakres]<<endl;
        }

    }



    return 0;
}

