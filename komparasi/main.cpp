#include <iostream>
using namespace std;

int main()
{
    string a = "Teguh";
    string b = "Firmansyah";
    bool hasil1, hasil2;

    // == != <= < >= >
    hasil1 = a > b;
    hasil2 = b < a;
    cout << hasil1 << hasil2 << endl;

    cin.get();
    return 0;
}