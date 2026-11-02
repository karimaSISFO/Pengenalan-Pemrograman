
#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 2;

    cout << "Pembagian Integer = " << a / b << endl;

    cout << "Pembagian Double = "
         << static_cast<double>(a) / b << endl;

    return 0;
}
