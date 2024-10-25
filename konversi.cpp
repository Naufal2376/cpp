#include <iostream>
using namespace std;

void konversiWaktu() {
    int hari, jam, menit, detik;

    cout << "Masukkan waktu (dalam detik): ";
    cin >> detik;

    hari = detik / 86400;
    jam = (detik % 86400) / 3600;
    menit = (detik % 3600) / 60;
    detik = detik % 60;

    cout << "Waktu dalam bentuk (Hari, Jam, Menit, Detik): " << endl;
    cout << hari << " Hari, " << jam << " Jam, " << menit << " Menit, " << detik << " Detik" << endl;

    cout << "\n";
}

void konversiJarak() {
    int kilometer, meter, sentimeter;

    cout << "Masukkan Jarak (dalam sentimeter): ";
    cin >> sentimeter;

    kilometer = sentimeter / 100000;
    meter = (sentimeter % 100000) / 100;
    sentimeter = sentimeter % 100;

    cout << "Jarak dalam bentuk (Kilometer, Meter, Sentimeter): " << endl;
    cout << kilometer << " Kilometer, " << meter << " Meter, " << sentimeter << " Sentimeter" << endl;

    cout << "\n";
}

int main() {
    int tinggiBadan;
    cout << "Masukkan Tinggi Badan (dalam cm): ";
    cin >> tinggiBadan;

    cout << "Berat Ideal anda adalah: " << ((tinggiBadan - 100) - (0.1 * (tinggiBadan - 100))) << " kg" << endl;

    return 0;
}

// void konversi() {
//     int pilih, detik;

//     cout << "1. Hari" << endl;
//     cout << "2. Jam" << endl;
//     cout << "3. Menit" << endl;
//     cout << "4. Detik" << endl;

//     cout << "Masukkan pilihan: ";
//     cin >> pilih;
//     cout << "Masukkan detik: ";
//     cin >> detik;

//     switch (pilih) {
//     case 1:
//         cout << detik / 86400 << " Hari" << endl;
//         break;
//     case 2:
//         cout << detik / 3600 << " Jam" << endl;
//         break;
//     case 3:
//         cout << detik / 60 << " Menit" << endl;
//         break;
//     case 4:
//         cout << detik % 60 << " Detik" << endl;
//         break;
//     default:
//         cout << "Pilihan tidak valid" << endl;
//         break;
//     }
// }
// int main() {
//     konversiWaktu();
//     konversiJarak();
//     beratIdeal();
//     // konversi();

//     system("pause");

//     return 0;
// }