#include <iostream>
using namespace std;

void hitungRata(int n, float *rata);

int main(){
    float rata;
    int n;
    cout << "masukkan angka: ";
    cin >> n;
    
    hitungRata(n, &rata);
    cout << "Rata-rata: " << rata << endl;
}

void hitungRata(int n, float *rata){
    float total = 0, jumlah = 0;
    int n;
    do {
        if (n != 9999){
            total += n;
            jumlah++;
        }
    } while (n != 9999);

    if (jumlah > 0){
        rata = total / jumlah;
    } else {
        rata = 0;
    }
}