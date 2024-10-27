#include <iostream>
using namespace std;

void jarakDari1900(char tanggal[]) {
    int dd = (tanggal[0] - '0') * 10 + (tanggal[1] - '0');
    int mm = (tanggal[3] - '0') * 10 + (tanggal[4] - '0');
    int yyyy = (tanggal[6] - '0') * 1000 + (tanggal[7] - '0') * 100 + (tanggal[8] - '0') * 10 + (tanggal[9] - '0');
    
    int hari = 1, bulan = 1, tahun = 1900;
    int totalHari = 0;

    while (tahun < yyyy) {
        bool kabisat = (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
        totalHari += kabisat ? 366 : 365;
        tahun++;
    }

    while (bulan < mm) {
        int hariBulan;
        if (bulan == 2) {
            hariBulan = ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) ? 29 : 28;
        } else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
            hariBulan = 30;
        } else {
            hariBulan = 31;
        }
        totalHari += hariBulan;
        bulan++;
    }

    totalHari += dd - hari;

    cout << "Jarak hari dari 1-1-1900 ke " << tanggal << " adalah: " << totalHari << " hari" << endl;
}

int main() {
    char tanggal[11];

    cout << "Masukkan tanggal (dd-mm-yyyy): ";
    cin >> tanggal;

    jarakDari1900(tanggal);
    return 0;
}
