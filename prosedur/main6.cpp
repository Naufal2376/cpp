#include <iostream>
using namespace std;

void hitungJam(int waktu, int p);

int main() {
    int jam, menit, detik, waktu, p;

    cout << "Masukkan waktu (dalam jam): ";
    cin >> jam;

    cout << "Masukkan waktu (dalam menit): ";
    cin >> menit;

    cout << "Masukkan waktu (dalam detik): ";
    cin >> detik;

    waktu = (jam * 3600) + (menit * 60) + detik;

    cout << "Masukkan pengurangan menit: ";
    cin >> p;

    hitungJam(waktu, p);
}

void tampilkanWaktu(int jam, int menit, int detik) {
    if (jam < 10) cout << "0";
    cout << jam << ":";

    if (menit < 10) cout << "0";
    cout << menit << ":";

    if (detik < 10) cout << "0";
    cout << detik << endl;
}

void hitungJam(int waktu, int p) {
    int jam, menit, detik;

    jam = waktu / 3600;
    menit = (waktu % 3600) / 60;
    detik = (waktu % 3600) % 60;

    cout << "Waktu sekarang: ";
    tampilkanWaktu(jam, menit, detik);

    waktu -= (p * 60);

    jam = waktu / 3600;
    menit = (waktu % 3600) / 60;
    detik = (waktu % 3600) % 60;

    cout << "Waktu setelah pengurangan menit: ";
    tampilkanWaktu(jam, menit, detik);
}
