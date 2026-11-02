
#include <iostream>
using namespace std;

int main() {
    int A, B;

    cout << "Masukkan Bilangan A: ";
    cin >> A;

    cout << "Masukkan Bilangan B: ";
    cin >> B;

    cout << "\nHasil penjumlahan = " << A << " + " << B << " = " << A + B << endl;
    cout << "Hasil pengurangan = " << A << " - " << B << " = " << A - B << endl;
    cout << "Hasil perkalian = " << A << " * " << B << " = " << A * B << endl;

    if (B != 0) {
        cout << "Hasil pembagian = " << A << " / " << B << " = "
             << static_cast<double>(A) / B << endl;

        cout << "Hasil Sisa pembagian = " << A % B << endl;
    } else {
        cout << "Pembagian tidak dapat dilakukan karena B = 0" << endl;
    }

    return 0;
}
