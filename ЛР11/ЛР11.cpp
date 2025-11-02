#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

// Функція для обчислення середнього арифметичного елементів, кратних 5
double averageDivBy5(int a[4][4]) {
    int sum = 0, count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] % 5 == 0) { // перевірка кратності 5
                sum += a[i][j];
                count++;
            }
        }
    }
    if (count == 0) return 0;
    return (double)sum / count;
}

int main() {
    int a[4][4];

    cout << "Введіть елементи матриці 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    double avg = averageDivBy5(a);
    cout << "\nСереднє арифметичне елементів, кратних 5: " << avg << endl;

    return 0;
}

