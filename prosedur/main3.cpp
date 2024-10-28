#include <iostream>
using namespace std;

void cariTerkecil(int *kecil);

int main() {
    int kecil;

    cout << "Masukkan angka: ";
    cin >> kecil;

    if (kecil == 9999) {
        cout << "Tidak ada angka yang dimasukkan." << endl;
        return 0;
    }

    cariTerkecil(&kecil);
    cout << "Nilai terkecil: " << kecil << endl;

    return 0;
}

void cariTerkecil(int *kecil) {
    int angka;

    while (true) {
        cout << "Masukkan angka: ";
        cin >> angka;

        if (angka == 9999) {
            break;
        }

        if (angka < *kecil) {
            *kecil = angka;
        }
    }
}
