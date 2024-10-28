#include <iostream>
using namespace std;

void konversi(int n) {
    if (n == 0) {
        cout << "nol";
        return;
    }

    if (n >= 1000) {
        switch (n / 1000) {
            case 1: cout << "seribu "; break;
            case 2: cout << "dua ribu "; break;
            case 3: cout << "tiga ribu "; break;
            case 4: cout << "empat ribu "; break;
            case 5: cout << "lima ribu "; break;
            case 6: cout << "enam ribu "; break;
            case 7: cout << "tujuh ribu "; break;
            case 8: cout << "delapan ribu "; break;
            case 9: cout << "sembilan ribu "; break;
        }
        n %= 1000;
    }

    if (n >= 100) {
        switch (n / 100) {
            case 1: cout << "seratus "; break;
            case 2: cout << "dua ratus "; break;
            case 3: cout << "tiga ratus "; break;
            case 4: cout << "empat ratus "; break;
            case 5: cout << "lima ratus "; break;
            case 6: cout << "enam ratus "; break;
            case 7: cout << "tujuh ratus "; break;
            case 8: cout << "delapan ratus "; break;
            case 9: cout << "sembilan ratus "; break;
        }
        n %= 100;
    }

    if (n >= 20) {
        switch (n / 10) {
            case 2: cout << "dua puluh "; break;
            case 3: cout << "tiga puluh "; break;
            case 4: cout << "empat puluh "; break;
            case 5: cout << "lima puluh "; break;
            case 6: cout << "enam puluh "; break;
            case 7: cout << "tujuh puluh "; break;
            case 8: cout << "delapan puluh "; break;
            case 9: cout << "sembilan puluh "; break;
        }
        n %= 10;
    }

    if (n >= 11 && n <= 19) {
        switch (n) {
            case 11: cout << "sebelas"; break;
            case 12: cout << "dua belas"; break;
            case 13: cout << "tiga belas"; break;
            case 14: cout << "empat belas"; break;
            case 15: cout << "lima belas"; break;
            case 16: cout << "enam belas"; break;
            case 17: cout << "tujuh belas"; break;
            case 18: cout << "delapan belas"; break;
            case 19: cout << "sembilan belas"; break;
        }
    } else if (n == 10) {
        cout << "sepuluh";
    } else if (n > 0) {
        switch (n) {
            case 1: cout << "satu"; break;
            case 2: cout << "dua"; break;
            case 3: cout << "tiga"; break;
            case 4: cout << "empat"; break;
            case 5: cout << "lima"; break;
            case 6: cout << "enam"; break;
            case 7: cout << "tujuh"; break;
            case 8: cout << "delapan"; break;
            case 9: cout << "sembilan"; break;
        }
    }
}

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    konversi(n);

    return 0;
}
