#include <iostream>
using namespace std;

void TanggalSebelumnya(int dd, int mm, int yyyy) {
    int hariBulan;
    
    bool kabisat = (yyyy % 4 == 0 && yyyy % 100 != 0) || (yyyy % 400 == 0);

    switch (mm) {
        case 1: // Januari
        case 3: // Maret
        case 5: // Mei
        case 7: // Juli
        case 8: // Agustus
        case 10: // Oktober
        case 12: // Desember
            hariBulan = 31;
            break;
        case 4: // April
        case 6: // Juni
        case 9: // September
        case 11: // November
            hariBulan = 30;
            break;
        case 2: // Februari
            hariBulan = kabisat ? 29 : 28;
            break;
        default:
            cout << "Bulan tidak valid!" << endl;
            return;
    }

    if (dd == 1) { 
        mm--; 
        if (mm == 0) {
            mm = 12;
            yyyy--;
        }
        dd = hariBulan;
    } else {
        dd--;
    }

    cout << "Tanggal sebelumnya adalah: ";
    cout << dd << "-";
    cout << mm << "-";
    cout << yyyy << endl;
}

int main() {
    int dd, mm, yyyy;

    cout << "Masukkan tanggal (dd mm yyyy): ";
    cin >> dd >> mm >> yyyy;

    TanggalSebelumnya(dd, mm, yyyy);
    return 0;
}
