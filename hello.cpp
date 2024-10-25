#include <iostream>
using namespace std;

// void salamKenal() {
//     string nama;
//     printf("Halo siapa namamu?\n");
//     cout >> "Masukkan nama...";
//     cin >> nama;

//     cout << "Senang berteman denganmu", + nama;
// }

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    cout << *(ptr + 2) << endl;
   return 0;
}
