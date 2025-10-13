#include <iostream>
#include <cstdlib> // random
#include <ctime>   // для генерации рандомных чисел
#include <string>  // для работы со string
using namespace std;

int main() {
    cout << "Task 1\n"; 

    srand(time(0));
    int arr[10];

    for (int i = 0; i < 10; i++) { // заполнение числами от 2 до 103
        arr[i] = rand() % 102 + 2;
    }

    cout << "pre-sorted ";
    for (int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << endl;

    for (int i = 0; i < 9; i++) { // сортировка по возрастанию
        int min_idx = i;
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[min_idx]) min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }

    cout << "sorted ";
    for (int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << endl;

    // задача 2
    cout << "Task 2\n";

    int arr2[10];
    for (int i = 0; i < 10; i++) { // массив от 0 до 100
        arr2[i] = rand() % 101;
    }

    cout << "pre-sorted ";
    for (int i = 0; i < 10; i++) cout << arr2[i] << " ";
    cout << endl;

    for (int i = 0; i < 9; i++) { // сортировка по убыванию
        int max_idx = i;
        for (int j = i + 1; j < 10; j++) {
            if (arr2[j] > arr2[max_idx]) max_idx = j;
        }
        swap(arr2[i], arr2[max_idx]);
    } 

    cout << "sorted ";
    for (int i = 0; i < 10; i++) cout << arr2[i] << " ";
    cout << endl;

    // задача 3
    cout << "Task 3\n";

    string ph[5] = { "23-45-67", "12-34-56", "98-76-54", "11-22-33", "55-44-33" };

    cout << "presorted" << endl;
    for (int i = 0; i < 5; i++) cout << ph[i] << endl;

    // Сортировка выбором телефонов
    for (int i = 0; i < 4; i++) {
        int min_idx = i;
        for (int j = i + 1; j < 5; j++) {
            if (ph[j] < ph[min_idx]) min_idx = j;
        }
        swap(ph[i], ph[min_idx]);
    }

    cout << "\nsorted" << endl;
    for (int i = 0; i < 5; i++) cout << ph[i] << endl;

    return 0;
}