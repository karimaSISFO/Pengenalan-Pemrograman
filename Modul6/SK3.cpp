#include <iostream>
using namespace std;

int main() {
    int pilihan;

    do {
        // Menampilkan menu utama
        cout << "========================" << endl;
        cout << "       MENU UTAMA       " << endl;
        cout << "========================" << endl;
        cout << "1. Tampilkan Bilangan 1-10" << endl;
        cout << "2. Tampilkan Bilangan Genap" << endl;
        cout << "3. Tampilkan Bilangan Ganjil" << endl;
        cout << "4. Keluar" << endl;
        cout << "========================" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Bilangan 1-10:" << endl;

                for (int i = 1; i <= 10; i++) {
                    cout << i << " ";
                }

                cout << endl;
                break;

            case 2:
                cout << "Bilangan Genap 1-20:" << endl;

                for (int i = 2; i <= 20; i += 2) {
                    cout << i << " ";
                }

                cout << endl;
                break;

            case 3:
                cout << "Bilangan Ganjil 1-20:" << endl;

                for (int i = 1; i <= 20; i += 2) {
                    cout << i << " ";
                }

                cout << endl;
                break;

            case 4:
                cout << "Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak tersedia." << endl;
        }

        cout << endl;

    } while (pilihan != 4);

    return 0;
}