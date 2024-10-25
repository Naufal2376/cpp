#include <iostream>
using namespace std;

void bungaTahunan(int A, int i, int n, int &F);
int main(){
    int A, i, n, F;

    cout << "Masukkan nilai jumlah uang: ";
    cin >> A;

    cout << "Masukkan nilai bunga (dalam persen): ";
    cin >> i;

    cout << "Masukkan jumlah tahun: ";
    cin >> n;

    bungaTahunan(A, i, n, F);
    cout << "Total bunga: " << F << endl;
}

void bungaTahunan(int A, int i, int n, int &F){
    while(n > 0){
        A += A * i / 100;
        n--;
    }
    F = A;
}
