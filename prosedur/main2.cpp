#include <iostream>
using namespace std;

void hitungGenap(int n, int *hasil);
void hitungRata(float &rata);

int main(){
    float rata;
    
    hitungRata(rata);
    cout << "Rata-rata: " << rata << endl;
}

void hitungRata(float &rata){
    float total = 0, jumlah = 0;
    int n2;
    do {
        cout << "Masukkan angka: ";
        cin >> n2;
        if (n2 != 9999){
            total += n2;
            jumlah++;
        }
    } while (n2 != 9999);

    if (jumlah > 0){
        rata = total / jumlah;
    } else {
        rata = 0;
    }
}