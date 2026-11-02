#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai : ";
    cin >> nilai;

    // Validasi nilai menggunakan while
    while (nilai < 0 || nilai > 100) {
        cout << "Nilai tidak valid." << endl;
        cout << "Masukkan nilai : ";
        cin >> nilai;
    }

    // Menampilkan nilai yang valid
    cout << "Nilai  : " << nilai << endl;

    // Menentukan status kelulusan
    if (nilai >= 60) {
        cout << "Status : Lulus" << endl;
    } else {
        cout << "Status : Tidak Lulus" << endl;
    }

    return 0;
}