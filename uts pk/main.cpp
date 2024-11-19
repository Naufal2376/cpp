#include <iostream>
#include <iomanip>
using namespace std;

void menu(){
    cout << "---------------- MENU -----------------" << endl;
    cout << "1. Americano \t\t : Rp. 20.000" << endl;
    cout << "2. Palm Latte \t\t : Rp. 25.000" << endl;
    cout << "3. Cappucino \t\t : Rp. 30.000" << endl;
    cout << "4. Macha \t\t : Rp. 15.000" << endl;
    cout << "5. French Fries \t : Rp. 18.000" << endl;
    cout << "---------------------------------------" << endl;
}

void cetak(int porsi[], int total[], string nama[], int total_harga){
    cout << "---------------- STRUK PEMBELIAN ----------------" << endl;
    cout << left << setw(25) << "Nama Pesanan" << setw(10) << "Jumlah" << "Harga" << endl;
    cout << "-------------------------------------------------" << endl;
    
    for (int i = 0; i < 5; i++) {
        if (porsi[i] > 0) {
            cout << left << setw(25) << nama[i] 
                 << setw(10) << porsi[i] 
                 << "Rp. " << setw(10) << total[i] << endl;
        }
    }

    cout << "-------------------------------------------------" << endl;
    cout << right << setw(39) << "Total Harga : Rp. " << total_harga << endl;
}

void pesan(int jumlah, int& total_harga, int total[], int porsi[]){
    int pilihan;
    for (int i = 0; i < jumlah; i++) {
        menu();
        cout << "Masukkan pilihan ke-" << i + 1 << " : ";
        cin >> pilihan;

        while (pilihan < 1 || pilihan > 5) {
            cout << "Pilihan tidak ada, silakan masukkan pilihan yang benar." << endl;
            cout << "Masukkan pilihan ke-" << i + 1 << " : ";
            cin >> pilihan;
        }

        switch(pilihan){
            case 1:
                cout << "Anda memilih Americano" << endl << endl;
                total[0] += 20000;
                porsi[0]++;
                break;
            case 2:
                cout << "Anda memilih Palm Latte" << endl << endl;
                total[1] += 25000;
                porsi[1]++;
                break;
            case 3:
                cout << "Anda memilih Cappucino" << endl << endl;
                total[2] += 30000;
                porsi[2]++;
                break;
            case 4:
                cout << "Anda memilih Macha" << endl << endl;
                total[3] += 15000;
                porsi[3]++;
                break;
            case 5:
                cout << "Anda memilih French Fries" << endl << endl;
                total[4] += 18000;
                porsi[4]++;
                break;
        }
        total_harga += total[pilihan - 1];
    }
}

int main(){
    int jumlah, total_harga = 0;
    int total[5] = {0};
    int porsi[5] = {0};
    string nama[5] = {"Americano", "Palm Latte", "Cappucino", "Macha", "French Fries"};
    char input = 'y';

    do {
        cout << "Masukkan jumlah pesanan : ";
        cin >> jumlah;
        pesan(jumlah, total_harga, total, porsi);
        cetak(porsi, total, nama, total_harga);
        cout << "apakah ingin memesan lagi (y/n) : ";
        cin >> input;
    } while (input == 'y' || input == 'Y');

    return 0;
}
