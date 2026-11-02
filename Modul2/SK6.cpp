
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Konstanta
    const double BONUS = 2.0;
    const int TOTAL_PERTEMUAN = 14;

    // Variabel input
    double tugas, uts, uas;
    int jumlah_kehadiran;

    // Input nilai
    cout << "Masukkan Nilai Tugas       : ";
    cin >> tugas;

    cout << "Masukkan Nilai UTS         : ";
    cin >> uts;

    cout << "Masukkan Nilai UAS         : ";
    cin >> uas;

    cout << "Masukkan Jumlah Kehadiran  : ";
    cin >> jumlah_kehadiran;

    // Perhitungan nilai
    double nilai_sebelum_bonus = (tugas + uts + uas) / 3.0;
    double nilai_akhir = nilai_sebelum_bonus + BONUS;

    double persentase_kehadiran = (static_cast<double>(jumlah_kehadiran) / TOTAL_PERTEMUAN) * 100;

    // Evaluasi logika
    bool nilai_lulus = nilai_akhir >= 75;
    bool kehadiran_lulus = persentase_kehadiran >= 80;
    bool keduanya_terpenuhi = nilai_lulus && kehadiran_lulus;

    // Tampilan hasil
    cout << fixed << setprecision(2);

    cout << "\n============================================\n";
    cout << "          HASIL PERHITUNGAN NILAI           \n";
    cout << "============================================\n";

    cout << "\nNilai Tugas             : " << tugas << endl;
    cout << "Nilai UTS               : " << uts << endl;
    cout << "Nilai UAS               : " << uas << endl;
    cout << "Jumlah Kehadiran        : " << jumlah_kehadiran << " dari " << TOTAL_PERTEMUAN << endl;

    cout << "\nNilai Sebelum Bonus     : " << nilai_sebelum_bonus << endl;
    cout << "Bonus                   : " << BONUS << endl;
    cout << "Nilai Akhir             : " << nilai_akhir << endl;
    cout << "Persentase Kehadiran    : "<< persentase_kehadiran << "%" << endl;

    cout << "\n--------------------------------------------\n";
    cout << "HASIL EVALUASI LOGIKA\n";
    cout << "--------------------------------------------\n";

    cout << "\nNilai Akhir >= 75       : " << nilai_lulus << endl;
    cout << "Kehadiran >= 80%        : " << kehadiran_lulus << endl;
    cout << "Keduanya Terpenuhi      : " << keduanya_terpenuhi << endl;

    cout << "\n============================================\n";

    return 0;
}
