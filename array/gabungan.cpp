#include <iostream>
using namespace std;

void inputarray(int A[], int N) {
    for(int i = 0; i < N; i++){
        cout << "masukkan array A ["<< i << "] = ";
        cin >> A[i];
    }
}

void cetakarray(int A[], int N) {
    for(int i = 0; i < N; i++){
        cout << "array A[" << i << "] = " << A[i] << endl;
    }
}

void hitungRataRata(int A[], int N) {
    float jumlah = 0;
    float rata;

    for (int i = 0; i < N; i++) {
        jumlah += A[i];
    }

    rata = jumlah / N;
    cout << "Rata-ratanya = " << rata << endl;
}

int main(){
    int N; 
    cout << "masukkan nilai N = ";
    cin >> N;
    int A[N];
    inputarray(A, N);
    cetakarray(A, N);
    hitungRataRata(A, N);
}