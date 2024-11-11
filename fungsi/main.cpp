#include <iostream>
using namespace std;

int Pangkat(int bilangan, int pangkat);
int main(){
    int hasil;
    int bilangan, pangkat;

    cout << "masukkan bilangan: ";
    cin >> bilangan;

    cout << "masukkan pangkat: ";
    cin >> pangkat;

    hasil = Pangkat(bilangan, pangkat);

    cout << "hasil = " << hasil << endl;
}

int Pangkat(int bilangan, int pangkat){
    int hasil = 1;
    for(int i = 0; i < pangkat; i++){
        hasil *= bilangan;
    }
    return hasil;
}