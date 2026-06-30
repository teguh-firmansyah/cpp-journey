#include <iostream>
using namespace std;

int main()
{
    // 1. login
    string usernameAdmin = "adminGanteng";
    string passwordAdmin = "admin123";
    string username, password;

    cout << "=== LOGIN KE AKUN KAMU ===" << endl;
    cout << "Username : ";
    cin >> username;
    cout << "Password : ";
    cin >> password;

    if (usernameAdmin == username || passwordAdmin == password)
    {
        cout << "Kamu berhasil login ke akun kamu!!";
    }

    if (usernameAdmin != username && passwordAdmin != password)
    {
        cout << "Username atau password yang kamu masukan salah!!!";
    }

    // 2. syarat masuk wahana sesuai umur dan tinggi badan
    int umur = 12;
    int tinggiBadan = 150;
    int inputUmur, inputTinggiBadan;

    cout << "\n=== SYARAT MASUK WAHANA ===" << endl;
    cout << "Harus berumur 12 tahun ke atas dan tinggi minimal 150cm" << endl;
    cout << "Masukkan umur kamu : ";
    cin >> inputUmur;
    cout << "Masukkan tinggi badan kamu : ";
    cin >> inputTinggiBadan;

    if (inputUmur >= umur && inputTinggiBadan >= tinggiBadan)
    {
        cout << "Kamu boleh masuk";
    }
    else if (!(inputUmur >= umur && inputTinggiBadan >= tinggiBadan))
    {
        cout << "Kamu tidak boleh masuk" << endl;
    }

    // 3. mencari nilai untuk lulus atau tidak
    int nilaiMatematika, nilaiInggris;

    cout << "=== LULUS JIKA NILAI INGGRIS 90 DAN MATEMATIKA 85 ===" << endl;
    cout << "Masukkan nilai B.inggris kamu : ";
    cin >> nilaiInggris;
    cout << "Masukkan nilai matematika kamu : ";
    cin >> nilaiMatematika;

    if (nilaiInggris >= 90 && nilaiMatematika >= 85)
    {
        cout << "KAMU LULUSS SELAMATT!!";
    }
    else
    {
        cout << "KAMU TIDAKK LULUSS. BELAJAR LAGII YAAA";
    }

    // 4. mencari hari libur
    string hari;

    cout << "\n=== MENCARI HARI LIBUR ===" << endl;
    cout << "Masukkan hari : ";
    cin >> hari;

    if (hari == "sabtu" || hari == "minggu")
    {
        cout << "Hari " << hari << " adalah HARI LIBUR!" << endl;
    }
    else
    {
        cout << "Hari " << hari << " adalah hari kerja/sekolah." << endl;
    }

    return 0;

    return 0;
}