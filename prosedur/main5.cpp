#include <iostream>
using namespace std;

// Array untuk satuan dan belasan
string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};

void konversi(int n) {
    if (n == 0) {
        cout << "nol";
        return;
    }

    if (n >= 1000) {
        cout << (n / 1000 == 1 ? "seribu " : satuan[n / 1000] + " ribu ");
        n %= 1000;
    }

    if (n >= 100) {
        cout << (n / 100 == 1 ? "seratus " : satuan[n / 100] + " ratus ");
        n %= 100;
    }

    if (n >= 20) {
        cout << satuan[n / 10] << " puluh ";
        n %= 10;
    }

    if (n >= 11 && n <= 19) {
        cout << belasan[n - 10];
    } else if (n == 10) {
        cout << "sepuluh";
    } else if (n > 0) {
        cout << satuan[n];
    }
}

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    konversi(n);
    cout << endl;

    return 0;
}
