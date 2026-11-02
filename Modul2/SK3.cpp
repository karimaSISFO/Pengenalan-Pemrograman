
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    const double r = 7.0;

    double luas = PI * r * r;

    cout << "PI = " << PI << endl;
    cout << "r = " << r << endl;

    cout << "Luas Lingkaran = " << PI << " * "
         << r << " * " << r << " = " << luas << endl;

    return 0;
}
