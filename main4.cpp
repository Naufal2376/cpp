#include <iostream>

using namespace std;

int main() {
    // int angka;
    // char karakter;

    // cout << "masukkan karakter: ";
    // cin >> karakter;

    // angka = karakter - '0'; 
    // switch (karakter)
    // {
    // case '0':
    //     cout << angka;
    //     break;
    // case '1':
    //     cout << angka;
    //     break;
    // case '2':
    //     cout << angka;
    //     break;
    // case '3':
    //     cout << angka;
    //     break;
    // case '4':
    //     cout << angka;
    //     break;
    // case '5':
    //     cout << angka;
    //     break;
    // case '6':
    //     cout << angka;
    //     break;
    // case '7':
    //     cout << angka;
    //     break;
    // case '8':
    //     cout << angka;
    //     break;
    // case '9':
    //     cout << angka;
    //     break;
    // default:
    //     cout << (-1);
    //     break;
    // }
    // for (int i = 0; i <= 8; i++)
    // {
    //     cout << i << endl;
    // }

    // repeat(5, cout << i << endl);

    // int n = 0;
    // while (n<=20)
    // {
    //     if (n%2!=0)
    //     {
    //         cout << n << endl;
    //     }
    //     n++;
    // }
    // do
    // {
    //     cout << n << endl;
    //     n++;
    // } while(n<=20);

    // buat * siku-siku sampai 3
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}