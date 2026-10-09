// Задание 4. Схема столиков.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Введите число рядов и столбиков (1..8): ";
    cin >> rows >> cols;

    if (rows < 1 || rows > 8 || cols < 1 || cols > 8) {
        cout << "Ошибка: значения должны быть от 1 до 8." << endl;
        return 1;
    }

    for (int row = 1; row <= rows; row++) {
        for (int col = 1; col <= cols; col++) {
            if (row == col) {
                cout << 'X';
            }
            else {
                cout << '.';
            }
        }

        cout << endl;
    }

    return 0;
}