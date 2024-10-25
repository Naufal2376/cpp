#include <iostream>
using namespace std;

int main(){
    int posisiLift = 1;
    int tujuanLift;
    char ulang;

    do
    {
        cout << "Masukkan tujuan lift: ";
        cin >> tujuanLift;

        if (tujuanLift > 10 || tujuanLift < 1)
        {
            cout << "Posisi lift tidak valid" << endl;
            continue;
        }

        if (tujuanLift > posisiLift)
        {
            cout << "Lift sedang berjalan naik ke-" << tujuanLift << endl;
        } else if (tujuanLift < posisiLift)
        {
            cout << "Lift sedang berjalan turun ke-" << tujuanLift << endl;
        } else {
            cout << "Lift sedang berada di posisi tujuan" << endl;
        }

        posisiLift = tujuanLift;

        cout << "Posisi lift: " << posisiLift << endl;

        cout << "Apakah ingin melanjutkan? (y/n): ";
        cin >> ulang;
    } while(ulang == 'y');

    cout << "Program selesai";
}