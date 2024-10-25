#include <iostream>
using namespace std;

void cariTerkecil(int &kecil);

int main(){
    int kecil;
    
    cariTerkecil(kecil);
    cout << "Nilai terkecil: " << kecil << endl;
}

void cariTerkecil(int &kecil){
    int angka;
    do {
        cout << "Masukkan angka: ";
        cin >> angka;
        if (angka < kecil){
            kecil = angka;
        }
    } while (angka != 9999);
}