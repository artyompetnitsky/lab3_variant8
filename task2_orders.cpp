// Задание 2. Выручка кафе.

#include <iostream>
using namespace std;

int main() {
    double cost;
    double revenue = 0.0;
    int orders = 0;
    int expensive = 0;

    cout << "Введите стоимость заказа (0 - конец ввода): ";
    cin >> cost;

    while (cost != 0) {
        if (cost < 0) {
            cout << "Отрицательное значение пропущено." << endl;
        }
        else {
            revenue += cost;
            orders++;

            if (cost > 30) {
                expensive++;
            }
        }

        cout << "Введите стоимость заказа (0 - конец ввода): ";
        cin >> cost;
    }

    cout << "Общая выручка: " << revenue << endl;
    cout << "Принято заказов: " << orders << endl;
    cout << "Заказов дороже 30: " << expensive << endl;

    return 0;
}