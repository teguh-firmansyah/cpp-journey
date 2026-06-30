#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Sistem tiket bioskop
    int harga = 45000;
    double diskonUmur = 0.50, diskonHari = 0.10, diskonMember = 0.20;
    int umur, uang;
    string hari, member;

    cout << "=== SISTEM TIKET BIOSKOP ===" << endl;
    cout << "Harga tiket bioskop sebesar: Rp " << harga << endl;
    cout << "=== DISKON ===" << endl;
    cout << "Anak (<12 tahun), diskon 50%" << endl;
    cout << "Member, diskon 20%" << endl;
    cout << "Hari Senin dan Rabu, diskon 10%" << endl;
    cout << "-----------------------------------" << endl;

    cout << "Masukkan umur kamu : ";
    cin >> umur;
    cout << "Masukkan hari kapan menonton : ";
    cin >> hari;
    cout << "Mempunyai member atau tidak (y/t) : ";
    cin >> member;
    cout << "Masukkan uang kamu : ";
    cin >> uang;

    cout << "-----------------------------------" << endl;

    double totalDiskonPersen = 0.0;

    if (umur < 12)
    {
        totalDiskonPersen += diskonUmur;
    }

    if (hari == "senin" || hari == "rabu")
    {
        totalDiskonPersen += diskonHari;
    }

    if (member == "y" || member == "Y")
    {
        totalDiskonPersen += diskonMember;
    }

    int potongan = harga * totalDiskonPersen;
    int hargaAkhir = harga - potongan;

    cout << "Total Potongan Diskon : Rp " << potongan << " (" << totalDiskonPersen * 100 << "%)" << endl;
    cout << "Harga yang harus dibayar: Rp " << hargaAkhir << endl;

    if (uang > hargaAkhir)
    {
        int kembalian = uang - hargaAkhir;
        cout << "Pembayaran Berhasil! Kembalian kamu: Rp " << kembalian << endl;
    }
    else if (uang == hargaAkhir)
    {
        cout << "Pembayaran Berhasil! Uang kamu pas." << endl;
    }
    else
    {
        int kurang = hargaAkhir - uang;
        cout << "Pembayaran Gagal! Uang kamu kurang sebesar: Rp " << kurang << endl;
    }

    return 0;
}