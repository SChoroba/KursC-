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
    char slowo1[20], slowo2[20];

    cout << "Podaj pierwsze słowo: " << endl;
    cin >> slowo1;
    
    cout << "Podaj drugie słowo: " << endl;
    cin >> slowo2;

    if (strcmp(slowo1, slowo2) == 0) {
        cout << "Słowa są takie same!" << endl;
    }
    else {
        cout << "Słowa nie są takie same!" << endl;
    }
    return 0;
}
