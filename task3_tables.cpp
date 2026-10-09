// Задание 3. Размещение за столиками.

#include <iostream>
using namespace std;

int main() {
    int persons;

    do {
        cout << "Введите количество персон (1..12): ";
        cin >> persons;

        if (persons < 1 || persons > 12) {
            cout << "Значение должно быть от 1 до 12." << endl;
        }
    } while (persons < 1 || persons > 12);

    int tables = persons / 4;

    if (persons % 4 != 0) {
        tables++;
    }

    cout << "Персон: " << persons << endl;
    cout << "Столов по 4 места: " << tables << endl;

    return 0;
}