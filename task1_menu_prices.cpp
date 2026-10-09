// Задание 1. Цены позиций меню.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введите число позиций меню (1..20): ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "Ошибка: число позиций должно быть от 1 до 20." << endl;
        return 1;
    }

    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        double price = 2.5 + i * 0.5;
        cout << "Позиция " << i << " - " << price << endl;
        sum += price;
    }

    cout << "Сумма цен всех позиций: " << sum << endl;

    return 0;
}