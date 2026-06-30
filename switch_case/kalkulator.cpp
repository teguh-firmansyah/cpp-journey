#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    double angkaPertama, angkaKedua, hasil;
    char pilihOperator;

    cout << "===== KALKULATOR SEDERHANA =====" << endl;
    cout << "Masukkan angka pertama : ";
    cin >> angkaPertama;
    cout << "Pilih operator (+, -, *, /) : ";
    cin >> pilihOperator;
    cout << "Masukkan angka kedua : ";
    cin >> angkaKedua;

    switch (pilihOperator)
    {
    case '+':
        hasil = angkaPertama + angkaKedua;
        cout << "Hasil penjumlahan dari " << angkaPertama << " + " << angkaKedua << " = " << hasil << endl;
        break;
    case '-':
        hasil = angkaPertama - angkaKedua;
        cout << "Hasil pengurangan dari " << angkaPertama << " - " << angkaKedua << " = " << hasil << endl;
        break;
    case '*':
        hasil = angkaPertama * angkaKedua;
        cout << "Hasil perkalian dari " << angkaPertama << " x " << angkaKedua << " = " << hasil << endl;
        break;
    case '/':
        if (angkaKedua == 0)
        {
            cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
        }
        else
        {
            hasil = angkaPertama / angkaKedua;
            cout << "Hasil pembagian dari " << angkaPertama << " / " << angkaKedua << " = " << hasil << endl;
        }
        break;
    default:
        cout << "Operator tidak valid mohon memasukkan operator yang valid!!" << endl;
        break;
    }

    return 0;
}