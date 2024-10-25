#include <iostream>
#include <iomanip>  // Untuk menggunakan manipulasi format setw dan setfill
using namespace std;

void hitungJam(int waktu, int p);

int main() {
    int jam, menit, detik, waktu, p;

    // Input waktu dalam jam, menit, dan detik
    cout << "Masukkan waktu (dalam jam): ";
    cin >> jam;

    cout << "Masukkan waktu (dalam menit): ";
    cin >> menit;

    cout << "Masukkan waktu (dalam detik): ";
    cin >> detik;

    // Mengonversi jam, menit, dan detik menjadi detik total
    waktu = (jam * 3600) + (menit * 60) + detik;

    // Input pengurangan menit
    cout << "Masukkan pengurangan menit: ";
    cin >> p;

    // Memanggil fungsi untuk menghitung jam setelah pengurangan
    hitungJam(waktu, p);
}

void hitungJam(int waktu, int p) {
    int jam, menit, detik;

    // Menghitung jam, menit, detik dari waktu total sebelum pengurangan
    jam = waktu / 3600;
    menit = (waktu % 3600) / 60;
    detik = (waktu % 3600) % 60;

    // Menampilkan waktu sebelum pengurangan dalam format hh:mm:ss
    cout << "Waktu sekarang: " 
         << setw(2) << setfill('0') << jam << ":"
         << setw(2) << setfill('0') << menit << ":"
         << setw(2) << setfill('0') << detik << endl;

    // Mengurangi waktu sesuai pengurangan menit (dalam detik)
    waktu -= (p * 60);

    // Menghitung kembali jam, menit, detik setelah pengurangan
    jam = waktu / 3600;
    menit = (waktu % 3600) / 60;
    detik = (waktu % 3600) % 60;

    // Menampilkan waktu setelah pengurangan dalam format hh:mm:ss
    cout << "Waktu setelah pengurangan menit: " 
         << setw(2) << setfill('0') << jam << ":"
         << setw(2) << setfill('0') << menit << ":"
         << setw(2) << setfill('0') << detik << endl;
}
