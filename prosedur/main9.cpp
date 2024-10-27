#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

bool isKabisat(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

void TanggalSebelumnya(string &tanggal) {
    int dd, mm, yyyy;
    
    char delimiter;
    stringstream ss(tanggal);
    ss >> dd >> delimiter >> mm >> delimiter >> yyyy;

    int jumlahHari[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isKabisat(yyyy)) {
        jumlahHari[1] = 29;
    }

    if (mm == 1) {
        mm = 12;
        yyyy--;
        dd = 31;
    } else {
        if (dd == 1) {
            mm--;
            if (mm == 0) {
                mm = 12;
                yyyy--;
            }
            dd = jumlahHari[mm - 1];
        } else {
            dd--;
        }
    }

    cout << "Tanggal sebelumnya adalah: " 
         << setw(2) << setfill('0') << dd << "-"
         << setw(2) << setfill('0') << mm << "-"
         << yyyy << endl;
}

int main() {
    string tanggal;

    cout << "Masukkan tanggal (dd-mm-yyyy): ";
    cin >> tanggal;

    TanggalSebelumnya(tanggal);
    return 0;
}
