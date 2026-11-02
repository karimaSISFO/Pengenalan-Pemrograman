#include <iostream>
using namespace std;

int main() {
    int nilai;
    int pilihan;

    int jumlahData = 0;
    int totalNilai = 0;
    int jumlahLulus = 0;
    int jumlahTidakLulus = 0;

    do {
        // Memasukkan nilai mahasiswa
        cout << "Masukkan nilai : ";
        cin >> nilai;

        // Memeriksa apakah nilai valid
        if (nilai >= 0 && nilai <= 100) {
            jumlahData++;
            totalNilai += nilai;

            // Menentukan status mahasiswa
            if (nilai >= 60) {
                cout << "Status       : Lulus" << endl;
                jumlahLulus++;
            } else {
                cout << "Status       : Tidak Lulus" << endl;
                jumlahTidakLulus++;
            }
        } else {
            cout << "Nilai tidak valid." << endl;
        }

        // Menanyakan apakah ingin input nilai lagi
        cout << "Input nilai lagi? (1 = Ya, 0 = Tidak) : ";
        cin >> pilihan;

    } while (pilihan == 1);

    // Menghitung rata-rata
    double rataRata = 0;

    if (jumlahData > 0) {
        rataRata = (double) totalNilai / jumlahData;
    }

    // Menampilkan hasil akhir
    cout << endl;
    cout << "===================================" << endl;
    cout << "       HASIL PENGOLAHAN            " << endl;
    cout << "===================================" << endl;

    cout << "Jumlah Data Valid   : " << jumlahData << endl;
    cout << "Total Nilai        : " << totalNilai << endl;
    cout << "Rata-rata          : " << rataRata << endl;
    cout << "Jumlah Lulus       : " << jumlahLulus << endl;
    cout << "Jumlah Tidak Lulus : " << jumlahTidakLulus << endl;

    cout << "===================================" << endl;
    cout << "Program selesai." << endl;

    // Nested loop untuk menampilkan angka
    cout << endl;
    cout << "Pola Angka:" << endl;

    for (int baris = 1; baris <= 5; baris++) {
        for (int kolom = 1; kolom <= baris; kolom++) {
            cout << kolom << " ";
        }
        cout << endl;
    }

    return 0;
}