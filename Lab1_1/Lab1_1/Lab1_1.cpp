#include <iostream>
using namespace std;

int main() {
    cout << "First string" << endl;
    cout << "Первая строка\nВторая строка" << endl;
    setlocale(LC_ALL, "Russian");
    cout << "Проверка русских символов" << endl;
    cout << "Спецсимволы \"\\\" " << endl;
    return 0;
} 