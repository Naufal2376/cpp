#include <iostream>
#include <string>
using namespace std;

void no1() {
    int n, fib1 = 0, fib2 = 1, fib3;

    cout << "Masukkan angka: ";
    cin >> n;

    if (n <= 0) {
        cout << "Masukkan angka positif!" << endl;
    } else if (n == 1) {
        cout << "1" << endl;
    } else {
        cout << fib1 << " " << fib2 << " ";
        for (int i = 2; i < n; i++) {
            fib3 = fib1 + fib2;
            cout << fib3 << " ";
            fib1 = fib2;
            fib2 = fib3;
        }
    }
}

void no2() {
    string nama;
    char golongan;
    int gaji, lembur, jam;
    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukkan golongan: ";
    cin >> golongan;
    cout << "Masukkan jam lembur: ";
    cin >> lembur;
    jam = 48;
    
    if (golongan == 'A') {
        gaji = 2000 * jam;
    } else if (golongan == 'B') {
        gaji = 3000 * jam;
    } else if (golongan == 'C') {
        gaji = 4000 * jam;
    } else if (golongan == 'D') {
        gaji = 5000 * jam;
    } else {
        cout << "Golongan tidak valid!" << endl;
    }

    cout << "Gaji " << nama << " tanpa lembur: " << gaji << endl;

    if (lembur > 0) {
        gaji += 3000 * lembur;
        cout << "Gaji lembur " << nama << ": " << 3000 * lembur << endl;
        cout << "Gaji setelah lembur: " << gaji << endl;
    }
}

void no3() {
    int R1, R2, RSeri, RParallel;

    cout << "Masukkan R1: ";
    cin >> R1;
    cout << "Masukkan R2: ";
    cin >> R2;

    RSeri = R1 + R2;
    RParallel = (R1 * R2) / (R1 + R2);

    cout << "Resistor seri: " << RSeri << endl;
    cout << "Resistor parallel: " << RParallel << endl;
}

int main() {
    // no1();
    // no2();
    no3();
    return 0;
}