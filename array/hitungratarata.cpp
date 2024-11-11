#include <iostream>
using namespace std;

void hitungRataRata(int A[], int N) {
    float jumlah = 0;
    float rata;

    for (int i = 0; i < N; i++) {
        A[i] = i + 1;
        cout << "array A[" << i << "] = " << A[i] << endl;
        jumlah += A[i];
    }

    rata = jumlah / N;
    cout << "Rata-ratanya = " << rata << endl;
}

int main() {
    int N;
    cout << "masukkan nilai N = ";
    cin >> N;
    int A[N];
    hitungRataRata(A, N);
    return 0;
}
