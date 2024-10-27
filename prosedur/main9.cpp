#include <iostream>
using namespace std;

void TanggalSebelumnya(char tanggal[]) {
    int dd = (tanggal[0] - '0') * 10 + (tanggal[1] - '0');
    int mm = (tanggal[3] - '0') * 10 + (tanggal[4] - '0');
    int yyyy = (tanggal[6] - '0') * 1000 + (tanggal[7] - '0') * 100 + (tanggal[8] - '0') * 10 + (tanggal[9] - '0');

    int jumlahHari[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((yyyy % 4 == 0 && yyyy % 100 != 0) || (yyyy % 400 == 0)) {
        jumlahHari[1] = 29;
    }

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

    cout << "Tanggal sebelumnya adalah: ";
    if (dd < 10) cout << "0";
    cout << dd << "-";
    
    if (mm < 10) cout << "0";
    cout << mm << "-";
    
    cout << yyyy << endl;
}

int main() {
    char tanggal[11];

    cout << "Masukkan tanggal (dd-mm-yyyy): ";
    cin >> tanggal;

    TanggalSebelumnya(tanggal);
    return 0;
}
