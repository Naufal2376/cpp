#include <iostream>
using namespace std;

void hitungGenap(int n, int *hasil);

int main(){
    int n;

    cout << "Masukkan angka: ";
    cin >> n;
    hitungGenap(n, &hasil);
    cout << "Hasilnya: " << hasil << endl;
}

void hitungGenap(int n, int *hasil){
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            *hasil += i;
        }
    }
}