#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

// Функция сравнения для целых чисел
int cmp_int(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

// Функция сравнения для первого столбца двумерного массива
int cmp_2d(const void* a, const void* b) {
    int* arr1 = (int*)a;
    int* arr2 = (int*)b;
    return arr1[0] - arr2[0];
}

// Функция сравнения для студентов
int cmp_stud(const void* a, const void* b) {
    return strcmp((char*)a, (char*)b);
}

int main() {
    srand(time(0));

    // Задача 1: 1000 чисел
    int a[1000];
    cout << "Task 1 - Default: ";
    for (int i = 0; i < 1000; i++) {
        a[i] = rand() % 1000;
        cout << a[i] << " ";
    }
    qsort(a, 1000, sizeof(int), cmp_int);
    cout << "\nTask 1 - Sorted: ";
    for (int i = 0; i < 10; i++) cout << a[i] << " "; // Вывод только первых 10 (можно, конечно все, но для проверки хватит)
    cout << "\n\n";

    // Задача 2: Числа {50,100}
    int b[10];
    cout << "Task 2 - Default: ";
    for (int i = 0; i < 10; i++) {
        b[i] = 50 + rand() % 51;
        cout << b[i] << " ";
    }
    qsort(b, 10, sizeof(int), cmp_int);
    cout << "\nTask 2 - Sorted: ";
    for (int i = 0; i < 10; i++) cout << b[i] << " ";
    cout << "\n\n";

    // Задача 3: Первый столбец 2D массива
    int c[5][5];
    cout << "Task 3 - Default: ";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            c[i][j] = 5 + rand() % 57;
        }
        cout << c[i][0] << " ";
    }
    qsort(c, 5, sizeof(c[0]), cmp_2d);
    cout << "\nTask 3 - Sorted: ";
    for (int i = 0; i < 5; i++) cout << c[i][0] << " ";
    cout << "\n\n";

    // Задача 4: Студенты по алфавиту
    char students[][50] = { "Petrov", "Biba", "Boba", "Fokin", "Burangukov" };
    cout << "Task 4 - Default: ";
    for (int i = 0; i < 5; i++) cout << students[i] << " ";
    qsort(students, 5, 50, cmp_stud);
    cout << "\nTask 4 - Sorted: ";
    for (int i = 0; i < 5; i++) cout << students[i] << " ";

    return 0;
}