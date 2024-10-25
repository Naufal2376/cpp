#include <iostream>
using namespace std;

void no1(){
    int n, hasil;
    cout << "Masukkan nilai n: ";
    cin >> n;

    hasil = 0;

    // while(n>0){
    //     cout << "p";
    // }

    if (n > 0){
        for(int i = 1; i <= n; i++){
            hasil += (2 * i - 1);
        }
    }

    cout << "Hasilnya: " << hasil << endl;
}

void no2(){
    int n, hasil;
    cout << "Masukkan nilai n: ";
    cin >> n;

    hasil = 0;

    if (n % 2 != 0){
        for(int i = 1; i <= n; i+=2){
            hasil += i;
        }
        cout << "Hasilnya: " << hasil << endl;
    }
}

void no3(){
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    if (n > 0){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << "*";
            }
            cout << endl;
        }
        for(int i = n; i >= 1; i--){
            for(int j = 1; j < i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
}

void no4(){
    int angka = 0;

    for (int x = 0; x <= 25; x++){
        for (int y = 0; y <= 25 - x; y++){
            int z = 25 - x - y;
            angka++;
            cout << "(" << x << ", " << y << ", " << z << ")" << ": " << angka << endl;
        }
    }
    cout << angka << endl;
}

int main(){
    no1();
    // no2();
    // no3();
    // no4();

    return 0;
}