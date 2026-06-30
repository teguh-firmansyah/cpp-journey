#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int angkaHari;

    cout << "MENCARI HARI LIBUR" << endl;
    cout << "Masukkan angka urutan dari (1 = senin dst) : ";
    cin >> angkaHari;

    switch (angkaHari)
    {
    case 1:
        cout << "Hari senin bukan hari libur" << endl;
        break;
    case 2:
        cout << "Hari selasa bukan hari libur" << endl;
        break;
    case 3:
        cout << "Hari rabu bukan hari libur" << endl;
        break;
    case 4:
        cout << "Hari kamis bukan hari libur" << endl;
        break;
    case 5:
        cout << "Hari jumat bukan hari libur" << endl;
        break;
    case 6:
        cout << "Hari sabtu adalah hari libur" << endl;
        break;
    case 7:
        cout << "Hari minggu adalah hari libur" << endl;
        break;
    default:
        cout << "Hari tidak ada" << endl;
        break;
    }

    return 0;
}