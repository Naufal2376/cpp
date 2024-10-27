#include <iostream>
using namespace std;

void hitungWaktuKurang(int hh, int mm, int ss, int p, int &hh_baru, int &mm_baru, int &ss_baru) {
    int total_detik = hh * 3600 + mm * 60 + ss;
    int p_detik = p * 60;
    
    int total_detik_baru = total_detik - p_detik;

    hh_baru = (total_detik_baru / 3600) % 24;
    mm_baru = (total_detik_baru / 60) % 60;
    ss_baru = total_detik_baru % 60;
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

    hitungWaktuKurang(hh, mm, ss, p, hh_baru, mm_baru, ss_baru);

    cout << "Waktu setelah dikurangi: " << hh_baru << ":" << mm_baru << ":" << ss_baru << endl;

    return 0;
}
