#include <iostream>
#include <limits>
using namespace std;

int main()
{
    // Bilangan bulat
    int dataInt = 100; // 32 bit
    // <int>
    // 4 byte
    // 2147483647
    // -2147483648

    long dataLong = 10; // 64 bit
    // <long>
    // 8 byte
    // 9223372036854775807
    // -9223372036854775808

    short dataShort = 4;
    // <short>
    // 2 byte
    // 32767
    // -32768

    // Bilangan decimal
    float dataFloat = 1.0;
    double dataDouble = 2.5;

    // Char
    char a = 'a'; // Character 1-bit

    // Bolean
    bool b = true; // true/false;

    cout << dataShort << endl;
    cout << sizeof(dataShort) << " byte" << endl;
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;

    cin.get();
    return 0;
}