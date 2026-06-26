#include <iostream>
using namespace std;

int main()
{
    float angka1, angka2, hasil;

    cout << "===== Penjulahan =====" << endl;
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua   : ";
    cin >> angka2;

    hasil = angka1 + angka2;

    cout << "Penjumlahan dari " << angka1 << " + " << angka2 << " = " << hasil << endl;

    cin.get();
    return 0;
}