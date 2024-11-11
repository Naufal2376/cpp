#include <iostream>
using namespace std;

void inputarray(int a[5]) {
    for(int i = 0; i < 5; i++){
        cout << "masukkan array a ["<< i << "] = ";
        cin >> a[i];
    }
}

void cetakarray(int a[5]) {
    for(int i = 0; i < 5; i++){
        cout << "array a[" << i << "] = " << a[i] << endl;
    }
}

int main() {
    int a[5];
    inputarray(a);
    cetakarray(a);
}

