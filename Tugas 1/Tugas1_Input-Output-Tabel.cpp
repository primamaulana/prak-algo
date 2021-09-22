#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string nama,nim,plug;
    int jmlStrip;

    //input data
    cout << "Masukkan :" << "\n";

    cout << "Nama" << setw(8) << ": ";
    getline(cin,nama);

    cout << "NIM" << setw(9) << ": ";
    getline(cin,nim);

    cout << "Plug" << setw(8) << ": ";
    getline(cin,plug);

    //output data
    cout << "\n" << "Inilah data Anda :" << "\n";

    cout << "Nama" << setw(8) << ": " << nama << "\n";
    cout << "NIM" << setw(9) << ": " << nim << "\n";
    cout << "Plug" << setw(8) << ": " << plug << "\n";

    //Menghitung total karakter
    jmlStrip = nama.length() + nim.length() + plug.length() + 6 + 11;

    //tabel
    //=header=
    cout << "\nDalam bentuk tabel :" << endl;

    cout << setfill('=') << setw(jmlStrip - 2) << "=" << "\n";

    cout << setfill(' ')
         << "NIM" << setw(nim.length())
         << "|" << setw(6) << "Nama" << setw(nama.length())
         << "|" << setw(6) << "PLug" << setw(plug.length()) << "\n";

    cout << setfill('=') << setw(jmlStrip - 2) << "=" << "\n";

    //=row=
    cout << setfill(' ')
         << nim << setw(3)
         << "|" << setw(nama.length() + 2) << nama << setw(4) << "|"
         << setw(plug.length() + 2) << plug << setw(4) << "\n";

    cout << setfill('-') << setw(jmlStrip - 2) << "-" << "\n";

    return 0;
}
