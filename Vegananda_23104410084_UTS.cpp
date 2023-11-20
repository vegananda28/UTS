#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int montor, mobil, jamMasuk, jamKeluar, durasi, biayaMotor, biayaMobil, total;
    // Untuk memasukkan jumlah motor
    cout << "Masukkan jumlah motor: ";
    cin >> montor;
    // Untuk memasukkan jumlah mobil
    cout << "Masukkan jumlah mobil: ";
    cin >> mobil;
    // Untuk memasukkan jam masuk
    cout << "Input jam masuk (format 24 jam): ";
    cin >> jamMasuk;
    // Untuk Memasukkan jam keluar
    cout << "Input jam keluar (format 24 jam): ";
    cin >> jamKeluar;
    // Untuk hitung durasi parkir
    if (jamKeluar >= jamMasuk) {
        durasi = jamKeluar - jamMasuk;
    }
    else {
        durasi = 24 - jamMasuk + jamKeluar;
    }
    // Hitung biaya parkir per jam
    biayaMotor = 2000;
    biayaMobil = 5000;
    // Hitung total pendapatan
    total = (montor * biayaMotor + mobil * biayaMobil) * durasi;
    // Cetak total pendapatan
    cout << "Total biaya parkir: Rp " << total << " (" << durasi << " jam)" << endl;
    return 0;
}