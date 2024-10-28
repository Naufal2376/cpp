#include <iostream>
using namespace std;

void hariKemarin(int hari);

int main() {
    int hari;

    cout << "Masukkan hari (1 untuk Senin, 2 untuk Selasa, ..., 7 untuk Minggu): ";
    cin >> hari;

    if(hari < 1 || hari > 7) {
        cout << "Input tidak valid. Masukkan angka antara 1 dan 7." << endl;
    } else {
        hariKemarin(hari);
    }
}

void hariKemarin(int hari) {
    int hariKemarin = (hari == 1) ? 7 : hari - 1;

    cout << "Hari kemarin adalah: ";
    if(hariKemarin == 1) cout << "Senin";
    else if(hariKemarin == 2) cout << "Selasa";
    else if(hariKemarin == 3) cout << "Rabu";
    else if(hariKemarin == 4) cout << "Kamis";
    else if(hariKemarin == 5) cout << "Jumat";
    else if(hariKemarin == 6) cout << "Sabtu";
    else if(hariKemarin == 7) cout << "Minggu";
    cout << endl;
}
