#include<iostream>
#include<string>

using namespace std;

int macierz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int suma[4][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
};

int naj[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int test[6];

int main()
{ 
    for (int i = 0; i < 3; i++) {
        for (int a = 0; a < 3; a++) {
            cout << "Podaj liczbę do tabeli: ";
            cin >> macierz[i][a];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int a = 0; a < 3; a++) {
            cout << macierz[i][a] << " ";
        }
        cout << endl;
    }


    cout << "======================================" << endl;

    int ssuma = 0;
    for (int i = 0; i < 4; i++) {
        for (int a = 0; a < 4; a++) {
            cout << "Podaj liczbę do sumy: ";
            cin >> suma[i][a];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int a = 0; a < 4; a++) {
            ssuma += suma[i][a];
        }
    }
    cout << ssuma;

    cout << "======================================" << endl;
    for (int i = 0; i < 3; i++) {
        for (int a = 0; a < 3; a++) {
            cout << "Podaj liczbę do sumy: ";
            cin >> naj[i][a];
        }
    }
    int najw = naj[0][0];
    int najm = naj[0][0];
    for (int i = 0; i < 3; i++) {
        for (int a = 0; a < 3; a++) {
            if (najw < naj[i][a]) {
                najw = naj[i][a];
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int a = 0; a < 3; a++) {
            if (najm > naj[i][a]) {
                najm = naj[i][a];
            }
        }
    }
    cout << "Największa liczba to :" << najw << endl;
    cout << "Najmniejsza liczba to :" << najm << endl;
    return 0;
}
