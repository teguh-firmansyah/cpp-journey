#include <iostream>
#include <limits>
using namespace std;

int main()
{
    short angka1 = 2;
    short angka2 = 5;
    short hasil;

    hasil = angka1 + angka2;
    cout << "penjumlahan dari " << angka1 << " + " << angka2 << " = " << hasil << endl;

    hasil = angka1 - angka2;
    cout << "pengurangan dari " << angka1 << " - " << angka2 << " = " << hasil << endl;

    hasil = angka1 * angka2;
    cout << "pengurangan dari " << angka1 << " * " << angka2 << " = " << hasil << endl;

    short pembagian1 = 10;
    float pembagian2 = 8;
    float hasilpembagian;

    hasilpembagian = pembagian1 / pembagian2;
    cout << "pembagian dari " << pembagian1 << " : " << pembagian2 << " = " << hasilpembagian << endl;
    cout << sizeof(pembagian1) << endl;
    cout << numeric_limits<unsigned short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

    // hasilpembagian = pembagian1 % pembagian2;
    // cout << "pembagian dari " << pembagian1 << " % " << pembagian2 << " = " << hasilpembagian << endl;

    hasil = angka1 + angka2 * angka1 + (angka1 - angka2);
    cout << hasil << endl;

    cin.get();
    return 0;
}