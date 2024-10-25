#include <iostream>
using namespace std;

void hariBesok(int hari);

int main() {
    int hari;

    cout << "Masukkan hari (1 untuk Senin, 2 untuk Selasa, ..., 7 untuk Minggu): ";
    cin >> hari;

    if(hari < 1 || hari > 7) {
        cout << "Input tidak valid. Masukkan angka antara 1 dan 7." << endl;
    } else {
        hariBesok(hari);
    }
}

void hariBesok(int hari) {
    int hariBesok = (hari % 7) + 1; // Menghitung hari berikutnya

    cout << "Hari besok adalah: ";
    if(hariBesok == 1) cout << "Senin";
    else if(hariBesok == 2) cout << "Selasa";
    else if(hariBesok == 3) cout << "Rabu";
    else if(hariBesok == 4) cout << "Kamis";
    else if(hariBesok == 5) cout << "Jumat";
    else if(hariBesok == 6) cout << "Sabtu";
    else if(hariBesok == 7) cout << "Minggu";
    cout << endl;
}
