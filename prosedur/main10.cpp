#include <iostream>
#include <sstream>
using namespace std;

bool isKabisat(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

int jumlahHariDalamBulan(int bulan, int tahun) {
    switch(bulan) {
        case 4: case 6: case 9: case 11: return 30;
        case 2: return isKabisat(tahun) ? 29 : 28;
        default: return 31;
    }
}

int hitungJarakHari(int dd, int mm, int yyyy) {
    int hari = 1, bulan = 1, tahun = 1900;
    int totalHari = 0;

    while (tahun < yyyy) {
        totalHari += isKabisat(tahun) ? 366 : 365;
        tahun++;
    }

    while (bulan < mm) {
        totalHari += jumlahHariDalamBulan(bulan, tahun);
        bulan++;
    }

    totalHari += dd - hari;

    return totalHari;
}

// Prosedur utama
void jarakDari1900(string tanggal) {
    int dd, mm, yyyy;
    char delimiter;

    stringstream ss(tanggal);
    ss >> dd >> delimiter >> mm >> delimiter >> yyyy;

    int jarakHari = hitungJarakHari(dd, mm, yyyy);
    cout << "Jarak hari dari 1-1-1900 ke " << tanggal << " adalah: " << jarakHari << " hari" << endl;
}

int main() {
    string tanggal;

    cout << "Masukkan tanggal (dd-mm-yyyy): ";
    cin >> tanggal;

    jarakDari1900(tanggal);
    return 0;
}
