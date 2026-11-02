
#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 3;
    int c = 4;

    int hasil1 = a + b * c;
    int hasil2 = (a + b) * c;

    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;
    cout << "Nilai c = " << c << endl;

    cout << "\nHasil a + b * c = " << hasil1 << endl;
    cout << "Hasil (a + b) * c = " << hasil2 << endl;

    return 0;
}
