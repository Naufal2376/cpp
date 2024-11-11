#include <iostream>
using namespace std;


void cetakarray(int A[], int N) {
    for(int i = 0; i < N; i++){
        A[i] = i;
        cout << "array A[" << i << "] = " << A[i] << endl;
    }
}

int main(){
    int N;
    cout << "masukkan nilai N = ";
    cin >> N;
    int A[N];

    cetakarray(A, N);
}