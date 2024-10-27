#include <iostream>
using namespace std;

void hitungGenap(int n, int *hasil);

int main(){
    int n;
    int hasil = 0;

    cout << "Masukkan jumlah bilangan genap: ";
    cin >> n;
    hitungGenap(n, &hasil);
    cout << "Hasilnya: " << hasil << endl;
}

void hitungGenap(int n, int *hasil){
    for(int i = 0; i < n; i++){
        *hasil += i * 2;
    }
}
