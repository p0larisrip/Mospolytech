#include <iostream>
///#include "function.h" ///я не понял как вызвать функцию, чтобы у меня не ругался vsc
#include <Windows.h>
using namespace std;

void defStatic(int num) {
    static int staticVar = 0;  
    cout << "summ: " << (num + staticVar) << endl;
    staticVar = num; 
}
#define SUM(a, b) ((a) + (b))

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "вызов функции несколько раз" << endl;
    defStatic(5);
    defStatic(9);
    defStatic(3);
    defStatic(8);



    cout << "\nтест макроса суммы:" << endl;
    cout << "SUM(5, 3) = " << SUM(5, 3) << endl;
    cout << "SUM(10, 7) = " << SUM(10, 7) << endl;
    cout << "SUM(2+3, 4+1) = " << SUM(2 + 3, 4 + 1) << endl;

    return 0;
}