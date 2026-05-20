#include <iostream>
#include <iomanip>
using namespace std;
// Function menghitung honor
int hitungHonor(int jamKerja) {
    int honorHarian = 80000;
    int totalHonor;
    if (jamKerja > 8) {
        int lembur = jamKerja - 8;
        totalHonor = honorHarian + (lembur * 10000);
    } else {
        totalHonor = honorHarian;
    }
    return totalHonor;
}
int main() {
    int jumlahPegawai;
    cout << "====================================================\n";
    cout << "         PROGRAM HONOR PEGAWAI HONORER\n";
    cout << "====================================================\n";
    cout << "Masukkan jumlah pegawai : ";
    cin >> jumlahPegawai;
    // Array
    string nama[jumlahPegawai];
    int jamKerja[jumlahPegawai];
    int totalHonor[jumlahPegawai];
    // Input data
    for (int i = 0; i < jumlahPegawai; i++) {
        cout << "\nData Pegawai ke-" << i + 1 << endl;
        cout << "Nama Pegawai     : ";
        cin >> nama[i];
        cout << "Jumlah Jam Kerja : ";
        cin >> jamKerja[i];
        // Memanggil function
        totalHonor[i] = hitungHonor(jamKerja[i]);
    }
    // Output tabel
    cout << "\n======================================================\n";
    cout << "| No | Nama Pegawai  | Jam Kerja  | Total Honor      |\n";
    cout << "======================================================\n";
    for (int i = 0; i < jumlahPegawai; i++) {
        cout << "| "
             << setw(2) << i + 1
             << " | "
             << setw(14) << left << nama[i]
             << "| "
             << setw(10) << left << jamKerja[i]
             << " | Rp. "
             << setw(12) << left << totalHonor[i]
             << " |\n";
    }
    cout << "======================================================\n";
    return 0;
}
