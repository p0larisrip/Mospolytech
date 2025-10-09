
#include <iostream>
using namespace std;

int main()
{   
    int mper = 42;
    cout << "start: " << mper << endl;
    int* ptr = &mper;
    cout << "adres: " << ptr << "\nznachenie: " << *ptr << endl;
    int a[] = { 1, 2, 3, 4, 5 };
    *ptr = 20;
    cout << "posle izmenenia: " << mper << endl;
    cout << "massiv: ";
    int* apt = a;
    for (int i = 0; i < 5; i++)
    {
        cout << *(apt + i) << "";
    }
    cout << endl;
    int x = 5;
    cout << "x = " << x << endl;
    int* const bpt = &x;
    *bpt = 15;
    cout << "x izmenen na: " << x << endl;
    return 0;
}

