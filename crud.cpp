#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string kelas;
};

vector<Mahasiswa> dataMahasiswa;

void tunggu(){
    cout << "\nKlik Enter Untuk Melanjutkan...";
    cin.ignore();
    cin.get();
}

void tambah(){
    Mahasiswa mhs;

    cout << "Tambah Data" << endl;
    cout << "Nama : ";
    cin.ignore();
    getline(cin, mhs.nama);
    cout << "NIM : ";
    getline(cin, mhs.nim);
    cout << "Kelas : ";
    getline(cin, mhs.kelas);

    dataMahasiswa.push_back(mhs);

    cout << "\nData Tersimpan";

    tunggu();
}

void ubah(){
    string nim;
    cout << "Masukkan NIM yang akan diubah: ";
    cin.ignore();
    getline(cin, nim);

    bool found = false;
    for (auto& mhs : dataMahasiswa) {
        if (mhs.nim == nim) {
            found = true;
            cout << "Ubah Data" << endl;
            cout << "Nama : ";
            getline(cin, mhs.nama);
            cout << "Kelas : ";
            getline(cin, mhs.kelas);

            cout << "\nData Tersimpan";
            break;
        }
    }

    if (!found) {
        cout << "Data dengan NIM " << nim << " tidak ditemukan!";
    }

    tunggu();
}

void hapus(){
    string nim;
    cout << "Masukkan NIM yang akan dihapus: ";
    cin.ignore();
    getline(cin, nim);

    bool found = false;
    for (auto it = dataMahasiswa.begin(); it != dataMahasiswa.end(); ++it) {
        if (it->nim == nim) {
            found = true;
            dataMahasiswa.erase(it);
            cout << "\nData Telah Dihapus";
            break;
        }
    }

    if (!found) {
        cout << "Data dengan NIM " << nim << " tidak ditemukan!";
    }

    tunggu();
}

void tampilkan(){
    cout << "\nData Mahasiswa:\n";
    cout << left << setw(20) << "Nama" << setw(20) << "NIM" << setw(10) << "Kelas" << endl;
    cout << "-----------------------------------------------------------" << endl;

    for (const auto& mhs : dataMahasiswa) {
        cout << left << setw(20) << mhs.nama << setw(20) << mhs.nim << setw(10) << mhs.kelas << endl;
    }

    if (dataMahasiswa.empty()) {
        cout << "Tidak ada data yang tersimpan." << endl;
    }

    tunggu();
}

void keluar(){
    cout << "\nKlik Enter Untuk Keluar...";
    cin.ignore();
    cin.get();
}

int main(){
    int pil;

    while (true) {
        cout << "1. Tambah\n2. Ubah\n3. Hapus\n4. Tampilkan\n5. Keluar\n";
        cout << "Pilih Menu : ";
        cin >> pil;

        switch (pil)
        {
        case 1:
            tambah();
            break;
        case 2:
            ubah();
            break;
        case 3:
            hapus();
            break;
        case 4:
            tampilkan();
            break;
        case 5:
            keluar();
            return 0; // Keluar dari program
        default:
            cout << "Menu Tidak Tersedia";
            tunggu();
            break;
        }
    }

    return 0;
}
