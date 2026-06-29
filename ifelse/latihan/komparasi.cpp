#include <iostream>
using namespace std;

int main()
{
    int angka1, angka2;

    // 1. mencari nilai positif dan negatif
    cout << "=== MENCARI NILAI POSITIF DAN NEGATIF ===" << endl;
    cout << "Masukkan nilai : ";
    cin >> angka1;

    if (angka1 > 0)
    {
        cout << "Positif";
    }
    else if (angka1 < 0)
    {
        cout << "Negatif";
    }
    else
    {
        cout << "NOL";
    }

    // 2. mencari angka yang paling besar
    cout << "\n=== MENCARI ANGKA YANG PALING BESAR ===" << endl;
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;

    if (angka1 > angka2)
    {
        cout << "Angka " << angka1 << " Yang paling besar";
    }
    else if (angka2 > angka1)
    {
        cout << "Angka " << angka2 << " Yang paling besar";
    }
    else
    {
        cout << "Kedua angka yang anda masukkan memiliki nilai yang sama";
    }

    // 3. mencari umur seseorang untuk membuat ktp
    int cukupUmur = 17;

    cout << "\n=== MENCARI UMUR SESEORANG ===" << endl;
    cout << "Masukkan umur kamu : ";
    cin >> angka1;

    if (angka1 >= cukupUmur)
    {
        cout << "Kamu boleh membuat KTP";
    }
    else
    {
        cout << "Kamu tidak boleh membuat KTP";
    }

    // 4. mencari nilai ujian jika lebih dari 80
    int kkm = 80;

    cout << "\n=== LULUS ATAU TIDAK DARI NILAI UJIAN ===" << endl;
    cout << "Masukkan nilai ujian kamu : ";
    cin >> angka1;

    if (angka1 >= 80)
    {
        cout << "Selamat kamu lulus ujian";
    }
    else
    {
        cout << "Belajar lebih giat lagi yaaa!!";
    }

    // 5. membandingkan kedua nilai sama atau tidak
    cout << "\n=== MEMBANDINGKAN KEDUA NILAI SAMA ATAU TIDAK ===" << endl;
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;

    if (angka1 == angka2)
    {
        cout << "Nilai keduanya sama!!";
    }
    else
    {
        cout << "Nilai keduanya tidak sama!!";
    }

    return 0;
}