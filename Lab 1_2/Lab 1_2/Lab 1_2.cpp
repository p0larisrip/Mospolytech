#include <iostream>
#include <string> 
using namespace std;

int main()
{
    int a = 150;
    float b = 15.933f;
    unsigned char c = 250;
    cout << "a = " << a << "\nb = " << b << "\nc = " << int(c) << endl;

    int d = 3;  
    string m = "november";
    int y = 2006;
    cout << "MBDay: " << d << " " << m << " " << y << " year" << endl;  

    const float num = 2.3f;
    const string os = "WINDOWS";
    cout << num << " " << os << endl;

    return 0;
}