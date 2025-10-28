#include <iostream>
#include <Windows.h>
using namespace std;
int sumArray(int* start, int* end) { ///* = указатель
    int sum = 0;
    for (int* ptr = start; ptr <= end; ptr++) {
        sum += *ptr;
    }
    return sum;
}
int sum(int a, int b) {
    return a + b;
}
int difference(int a, int b) {
    return a - b;
}
///------------------------------------------------------------------
int (*getOperation(char op))(int, int) {
    if (op == '+') {
        return &sum;
    }
    else if (op == '-') {
        return &difference;
    }
    return nullptr;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //проверка функции суммы массива
    int arr[] = { 1, 2, 3, 4, 5 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int result = sumArray(arr, arr + arrSize - 1);
    cout << "Сумма элементов массива: " << result << endl;

    //проверка работы с указателями 
    int (*operation)(int, int);
    operation = getOperation('+');
    if (operation != nullptr) {
        int sumResult = operation(10, 5);
        cout << "Сумма 10 и 5: " << sumResult << endl;
    }

    operation = getOperation('-');
    if (operation != nullptr) {
        int diffResult = operation(10, 5);
        cout << "Разность 10 и 5: " << diffResult << endl;
    }

    ///--------------------------------------------------------------------------

    float* dubFloat = new float(3.25f);
    cout << "Динамический float: " << *dubFloat << endl;
    delete dubFloat;

    return 0;
}