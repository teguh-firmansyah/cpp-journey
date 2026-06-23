#include "../compiling/include.h"
using namespace std;

int main()
{
    int umur = 18;
    string namaLengkap = "Teguh Firmansyah";
    bool pelajar = 0;

    cout << "Nama Saya : " << namaLengkap << endl;
    cout << "Saya Berumur : " << umur << " Tahun" << endl;
    cout << "Berstatus pelajar" << endl;
    cout << "1 = Active" << endl;
    cout << "0 = Nonactive" << endl;
    cout << "Status Pelajar : " << pelajar << endl;
    cin.get();
    return 0;
}