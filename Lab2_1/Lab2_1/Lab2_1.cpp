#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 

    double num1;
    cout << "первое число ";
    cin >> num1;

    double num2;
    cout << "второе число ";
    cin >> num2;
    double average;
    average = (num1 + num2) / 2;
    cout << "Ср арифм: " << average << endl;
    char oper;
    cout << "Введите знак операции (+, -, *, /) ";
    cin >> oper; ///сохр в переменную oper

    double result;

    
    //// 5. Используем условный оператор if-else
    //if (oper == '+') {
    //    result = num1 + num2;
    //    cout << "Результат: " << num1 << " + " << num2 << " = " << result << endl;
    //}
    //else if (oper == '-') {
    //    result = num1 - num2;
    //    cout << "Результат: " << num1 << " - " << num2 << " = " << result << endl;
    //}
    //else if (oper == '*') {
    //    result = num1 * num2;
    //    cout << "Результат: " << num1 << " * " << num2 << " = " << result << endl;
    //}
    //else if (oper == '/') {
    //    if (num2 != 0) {
    //        result = num1 / num2;
    //        cout << "Результат: " << num1 << " / " << num2 << " = " << result << endl;
    //    } else {
    //        cout << "Ошибка!!!!1111!!!1!!!1!1!!!!!" << endl;
    //    }
    //}
    //else {
    //    cout << "Ошибка: неизвестная операция!" << endl;
    //}
    

    // 6. Реализация с использованием оператора switch-case
    switch (oper) {
    case '+':
        result = num1 + num2;
        cout << "Результат: " << num1 << " + " << num2 << " = " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Результат: " << num1 << " - " << num2 << " = " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Результат: " << num1 << " * " << num2 << " = " << result << endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Результат: " << num1 << " / " << num2 << " = " << result << endl;
        }
        else {
            cout << "Ошибка!!11!!!!!!!!!!!" << endl;
        }
        break;
    default:
        cout << "Ошибка1111!!!!!!!!!!!11!!!!11!" << endl;
        break;
    }

    return 0;
}