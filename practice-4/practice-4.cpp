#include <iostream>
#include <string>
#include "converters.h"

using namespace std;

int main() {
    int choice = 0;

    while (choice != 4) {
        cout << "\n--- МЕНЮ ---" << endl;
        cout << "1. Конвертер валют" << endl;
        cout << "2. Конвертер довжини" << endl;
        cout << "3. Конвертер температури" << endl;
        cout << "4. Вихід" << endl;
        cout << "Оберіть дію: ";
        cin >> choice;

        if (choice == 1) {
            string from, to;
            double amount;
            cout << "З якої валюти (UAH, USD, EUR): "; cin >> from;
            cout << "В яку валюту (UAH, USD, EUR): "; cin >> to;
            cout << "Введіть суму: "; cin >> amount;

            double result = convertCurrency(amount, from, to);
            if (result != -1.0) {
                cout << "Результат: " << result << endl;
            }
            else {
                cout << "Помилка введення валюти!" << endl;
            }
        }
        else if (choice == 2) {
            int dir;
            double val;
            cout << "1. Метри в фути\n2. Фути в метри\nОберіть: "; cin >> dir;
            cout << "Введіть значення: "; cin >> val;

            double result = convertLength(val, dir);
            if (result != -1.0) {
                cout << "Результат: " << result << endl;
            }
            else {
                cout << "Помилка вибору!" << endl;
            }
        }
        else if (choice == 3) {
            int dir;
            double val;
            cout << "1. Цельсій в Фаренгейт\n2. ... в Цельсій\nОберіть: "; cin >> dir;
            cout << "Введіть градуси: "; cin >> val;

            double result = convertTemperature(val, dir);
            if (result != -999.0) {
                cout << "Результат: " << result << endl;
            }
            else {
                cout << "Помилка вибору!" << endl;
            }
        }
    }

    cout << "Програму завершено!" << endl;
    return 0;
}