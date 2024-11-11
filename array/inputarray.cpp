#include <iostream>
using namespace std;

void inputarray(int A[], int N) {
    for(int i = 0; i < N; i++){
        cout << "masukkan array A ["<< i << "] = ";
        cin >> A[i];
    }
}

int main(){
    int N;
    cout << "masukkan nilai N";
    cin >> N;
    int A[N];
    
    inputarray(A, N);
}