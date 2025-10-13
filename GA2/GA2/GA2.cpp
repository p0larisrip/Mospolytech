#include <iostream>
using namespace std;

// Задача 1: Вывод чисел от 1 до n
void print1(int n) {
    if (n > 0) {
        print1(n - 1);
        cout << n << " ";
    }
}

// Задача 2: Вывод чисел от A до B  
void print2(int a, int b) {
    cout << a << " ";
    if (a != b) {
        print2(a < b ? a + 1 : a - 1, b);
    }
}

// Задача 3: Сумма цифр числа
int sum(int n) {
    return n == 0 ? 0 : n % 10 + sum(n / 10);
}

// Задача 4: Простые делители числа
void del(int n, int d = 2) {
    if (n == 1) return;
    if (n % d == 0) {
        cout << d << " ";
        del(n / d, d);
    }
    else {
        del(n, d + 1);
    }
}

int main() {
    int n, a, b;

    cout << "Task 1 - n: "; cin >> n;
    print1(n); cout << endl;

    cout << "Task 2 - A & B: "; cin >> a >> b;
    print2(a, b); cout << endl;

    cout << "Task 3 - n: "; cin >> n;
    cout << sum(n) << endl;

    cout << "Task 4 - n: "; cin >> n;
    del(n); cout << endl;

    return 0;
}