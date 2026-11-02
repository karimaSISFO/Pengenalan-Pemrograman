#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    int percobaan = 0;

    // Meminta password
    cout << "Masukkan password: ";
    cin >> password;
    percobaan++;

    // Mengulang selama password salah
    while (password != "fikom123") {
        cout << "Password salah." << endl;
        cout << "Masukkan password: ";
        cin >> password;
        percobaan++;
    }

    // Jika password benar
    if (password == "fikom123") {
        cout << "Login berhasil." << endl;
        cout << "Jumlah percobaan : " << percobaan << endl;
    }

    return 0;
}