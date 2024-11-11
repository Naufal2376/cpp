#include <iostream>
using namespace std;

void hitungRata(int n, float *rata);

int main(){
    float rata;
    int n;
    cout << "Masukkan angka (masukkan 9999 untuk berhenti): ";
    cin >> n;
    
    hitungRata(n, &rata);
    cout << "Rata-rata: " << rata << endl;

    return 0;
}

void hitungRata(int n, float *rata){
    float total = 0;
    int jumlah = 0;

    while (n != 9999) {
        total += n;
        jumlah++;
        cout << "Masukkan angka (masukkan 9999 untuk berhenti): ";
        cin >> n;
    }

    if (jumlah > 0) {
        *rata = total / jumlah;
    } else {
        *rata = 0;
    }
}
