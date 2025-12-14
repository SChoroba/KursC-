#include<iostream>
#include<string>

using namespace std;

int tablica[10];
// system("cls");
int main() {
    int menu;
    for (;;) {
        cout << "=============Menu=============" << endl;
        cout << "Wybierz Opcję menu: " << endl;
        cout << "1) Wprowadź oceny" << endl << "2) Wyświetl oceny" << endl << "3) Oblicz srednia" << endl << "4) Najwyższa i najniższa ocena" << endl << "5) Zakoncz program" << endl;
        cin >> menu;
        switch (menu) {
        case 1:
            for (int i = 0; i < 10; i++) {
                system("cls");
                cout << "Prosze podac " << i << " ocene: ";
                cin >> tablica[i];
                if (tablica[i] < 0 || tablica[i] < 6){
                tablica[i] = 0;
                   cout << "Przerwanie wypisywania ocen z powodu nieprawidłowej oceny" << endl;
                }
                break;
                if (tablica[i] == 0) {
                    cout << "Przerwanie wypisywania ocen" << endl;
                    break;
                }
                else {
                    cout << "coś";
                }
                
            }
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            cout << "Twoje oceny to: " << endl;

            for (int i = 0; i < 10; i++) {

                cout << tablica[i] << endl;

            }
            system("pause");
            system("cls");
            break;
        case 3:
            cout << "cos";
            break;
        case 4:
            cout << "cos";
            break;
        case 5:
            exit(1);

        }
    }

    return 0;
}
