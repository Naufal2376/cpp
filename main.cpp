#include <iostream>
using namespace std;

// nomor 3
// void salamKenal()
// {
//     string nama;
//     cout << "Halo, siapa namamu?" << endl;
//     cout << "Masukkan nama: ";
//     cin >> nama;
//     cout << "Senang berteman denganmu, " << nama << "!" << endl;
//     cout << "\n";
// }

// nomor 5
// void ubahHuruf()
// {
//     int x, y, z;

//     // cara 1
//     cout << "Masukkan nilai x: ";
//     cin >> x;
//     cout << "Masukkan nilai y: ";
//     cin >> y;
//     cout << "Masukkan nilai z: ";
//     cin >> z;

//     cout << "Sebelum perubahan: " << x << ", " << y << ", " << z << endl;
//     cout << "Setelah perubahan: " << y << ", " << z << ", " << x << endl;

//     // cara 2
//     cout << "Sebelum perubahan: " << x << ", " << y << ", " << z << endl;
//     int temp = x;
//     x = y;
//     y = z;
//     z = temp;

//     cout << "Setelah perubahan: " << x << ", " << y << ", " << z << endl;

//     // cara 3
//     char arr[] = "xyz";
//     cout << "Sebelum perubahan: " << arr << endl;
//     cout << "Setelah perubahan: " << arr[1] << arr[2] << arr[0] << endl;
//     cout << "\n";
// }

// nomor 6
// void hitungGaji()
// {
//     int gajiPokok, gajiBersih;
//     float tunjangan, pajak;

//     cout << "Masukkan gaji pokok: ";
//     cin >> gajiPokok;

//     tunjangan = 0.25 * gajiPokok;
//     pajak = 0.05 * gajiPokok;
//     gajiBersih = gajiPokok + tunjangan - pajak;

//     cout << "Tunjangan anda: " << tunjangan << endl;
//     cout << "Pajak anda: " << pajak << endl;
//     cout << "Gaji bersih anda: " << gajiBersih << endl;
//     cout << "\n";
// }

// nomor 7
int main()
{
    int jumlahUang;
    int lembar1000, lembar500, lembar100, lembar50, lembar25;
    int sisa;
    cout << "Masukkan jumlah uang: ";
    cin >> jumlahUang;

    // cara 1
    lembar1000 = jumlahUang / 1000;
    sisa = jumlahUang % 1000;

    lembar500 = sisa / 500;
    sisa = sisa % 500;

    lembar100 = sisa / 100;
    sisa = sisa % 100;

    lembar50 = sisa / 50;
    sisa = sisa % 50;

    lembar25 = sisa / 25;
    sisa = sisa % 25;

    cout << "Pecahan uang yang diperlukan" << endl;
    cout << lembar1000 << " lembar 1000" << endl;
    cout << lembar500 << " lembar 500" << endl;
    cout << lembar100 << " lembar 100" << endl;
    cout << lembar50 << " lembar 50" << endl;
    cout << lembar25 << " lembar 25" << endl;

    // cara 2
    // int pecahan[] = {1000, 500, 100, 50, 25};
    // int jumlahPecahan[5] = {0};
    // int i;

    // for (i = 0; i < 5; i++)
    // {
    //     if (jumlahUang >= pecahan[i])
    //     {
    //         jumlahPecahan[i] = jumlahUang / pecahan[i];
    //         jumlahUang = jumlahUang % pecahan[i];
    //     }
    // }

    // for (i = 0; i < 5; i++)
    // {
    //     if (jumlahPecahan[i] > 0)
    //     {
    //         cout << jumlahPecahan[i] << " lembar " << pecahan[i] << endl;
    //     }
    // }
    // cout << "\n";
}

// int main()
// {
//     // salamKenal();
//     // ubahHuruf();
//     // hitungGaji();
//     hitungPecahan();

//     cout << "Program selesai\n";
//     system("pause");
//     return 0;
// }