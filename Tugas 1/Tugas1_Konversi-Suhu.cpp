#include <iostream>
using namespace std;

int main()
{
    cout << "Program Konversi Suhu" <<"\n";

    float c,f,k,r;

    cout << "Masukan Suhu Celcius : ";
    cin >> c;

    f = (9*c)/5 + 32;
    k = 273 + c;
    r = (4*c)/9 + 32;

    cout << "\n";
    cout << "Hasil Konversi Suhu dari Celcius ke : " <<"\n";
    cout << "Fahrenheit : " << f << "\n";
    cout << "Kelvin     : " << k << "\n";
    cout << "Reamur     : " << r << "\n";

    return 0;
}
