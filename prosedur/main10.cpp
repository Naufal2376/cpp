#include <iostream>
using namespace std;

void jarakDari1900(int dd, int mm, int yyyy) {
    if (yyyy < 1900 || (yyyy == 1900 && mm == 1 && dd < 1)) {
        cout << "Tanggal tidak valid. Harap masukkan tanggal setelah 1-1-1900." << endl;
        return;
    }

    int totalHari = 0;

    for (int tahun = 1900; tahun < yyyy; tahun++) {
        bool kabisat = (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
        totalHari += kabisat ? 366 : 365;
    }

    for (int bulan = 1; bulan < mm; bulan++) {
        int hariBulan;
        switch (bulan) {
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
                hariBulan = ((yyyy % 4 == 0 && yyyy % 100 != 0) || (yyyy % 400 == 0)) ? 29 : 28;
                break;
            default:
                hariBulan = 0;
        }
        totalHari += hariBulan;
    }

    totalHari += dd;

    totalHari -= 1;

    cout << "Jarak hari dari 1-1-1900 ke " << dd << "-" << mm << "-" << yyyy << " adalah: " << totalHari << " hari" << endl;
}

int main() {
    int dd, mm, yyyy;

    cout << "Masukkan tanggal (dd mm yyyy): ";
    cin >> dd >> mm >> yyyy;

    jarakDari1900(dd, mm, yyyy);
    return 0;
}
