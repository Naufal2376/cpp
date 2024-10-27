#include <iostream>
using namespace std;

void hitungWaktuKurangKasus(int &hh, int &mm, int ss, int p, int &hh_baru, int &mm_baru, int &ss_baru) {
    if (p > mm) {
        hh = (hh - 1 + 24) % 24;
        int selisih = p - mm;
        mm_baru = 60 - selisih;
    } else {
        mm_baru = mm - p;
    }

    ss_baru = ss;
    hh_baru = hh;
}

int main() {
    int hh, mm, ss, p;
    int hh_baru, mm_baru, ss_baru;

    cout << "Masukkan jam (hh): ";
    cin >> hh;
    cout << "Masukkan menit (mm): ";
    cin >> mm;
    cout << "Masukkan detik (ss): ";
    cin >> ss;
    cout << "Masukkan jumlah menit untuk dikurangi (p): ";
    cin >> p;

    hitungWaktuKurangKasus(hh, mm, ss, p, hh_baru, mm_baru, ss_baru);

    cout << "Waktu setelah dikurangi: " << hh_baru << ":" << mm_baru << ":" << ss_baru << endl;

    return 0;
}
