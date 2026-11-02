#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int jumlah;

    string namaBarang;
    int harga = 0;
    int subtotal;

    int transaksiValid = 0;
    int transaksiTidakValid = 0;
    int totalPenjualan = 0;

    do {
        // Menampilkan daftar barang
        cout << "========================" << endl;
        cout << "       DAFTAR BARANG    " << endl;
        cout << "========================" << endl;
        cout << "1. Buku   Rp10.000" << endl;
        cout << "2. Pensil Rp5.000" << endl;
        cout << "3. Pulpen Rp7.500" << endl;
        cout << "4. Selesai" << endl;
        cout << "========================" << endl;

        cout << "Pilih menu : ";
        cin >> pilihan;

        // Menentukan barang dan harga
        switch (pilihan) {
            case 1:
                namaBarang = "Buku";
                harga = 10000;
                break;

            case 2:
                namaBarang = "Pensil";
                harga = 5000;
                break;

            case 3:
                namaBarang = "Pulpen";
                harga = 7500;
                break;

            case 4:
                cout << "Program selesai." << endl;
                break;

            default:
                cout << "Pilihan tidak tersedia." << endl;
                transaksiTidakValid++;
                break;
        }

        // Jika memilih barang 1, 2, atau 3
        if (pilihan >= 1 && pilihan <= 3) {

            cout << "Jumlah barang : ";
            cin >> jumlah;

            // Memeriksa jumlah barang
            if (jumlah > 0) {

                subtotal = harga * jumlah;

                // Menghitung transaksi valid
                transaksiValid++;

                // Menambahkan subtotal ke total penjualan
                totalPenjualan += subtotal;

                // Menampilkan transaksi
                cout << endl;
                cout << "Barang   : " << namaBarang << endl;
                cout << "Harga    : Rp" << harga << endl;
                cout << "Jumlah   : " << jumlah << endl;
                cout << "Subtotal : Rp" << subtotal << endl;

            } else {
                cout << "Jumlah barang tidak valid." << endl;
                transaksiTidakValid++;
                cout << "Transaksi tidak dihitung." << endl;
            }

        }

        cout << endl;

    } while (pilihan != 4);

    // Menampilkan hasil akhir
    cout << "========================" << endl;
    cout << "     REKAP TRANSAKSI   " << endl;
    cout << "========================" << endl;

    cout << "Transaksi Valid   : " << transaksiValid << endl;
    cout << "Transaksi Tidak Valid : " << transaksiTidakValid << endl;
    cout << "Total Penjualan   : Rp" << totalPenjualan << endl;

    cout << "========================" << endl;
    cout << "Program selesai." << endl;

    return 0;
}