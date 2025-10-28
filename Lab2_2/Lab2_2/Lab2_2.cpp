#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    int number;
    while (true) {
        cout << "Введите целое ПОЛОЖИТЕЛЬНОЕ число ";
        cin >> number;

        if (number > 0) {
            break;
        }
        else {
            cout << "Ошибка: написано же, ПОЛОЖИТЕЛЬНОЕ" << endl;
        }
    }
    int sum = 0;
    for (int i = 1; i <= number; i++) { ///+1 пока не = number
        sum += i;
    }
    cout << "сумма чисел от 1 до " << number << " = " << sum << endl;
    int arr[10] = { 2, 5, 8, 12, 15, 18, 22, 25, 30, 35 };


    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << arr[5] << " " << arr[6] << " " << arr[7] << " " << arr[8] << " " << arr[9] << endl;

    cout << "Чётные: ";
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            cout << arr[i];
            if (i < 8) {
                cout << " ";
            }
        }
    }
    cout << endl;
    int ns = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            ns += arr[i];
        }
    }
    cout << "Сумма нечётных: " << ns << endl;

    return 0;
}