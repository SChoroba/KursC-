#include<iostream>
#include<string>

using namespace std;


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
