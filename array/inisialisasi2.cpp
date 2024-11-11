#include <iostream>
using namespace std;

void inisialisasiLarik(int A[], int N){
    for (int i = 1; i < N; i++){
        A[i] = i;
    }
}

int main(){
    int N;
    cout << "masukkan nilai N = ";
    cin >> N;
    int A[N];

    inisialisasiLarik(A, N);
}