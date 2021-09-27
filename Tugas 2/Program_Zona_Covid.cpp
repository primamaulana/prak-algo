#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char minggu1,minggu2,kematian,odp;
    string hasil,kelurahan,kecamatan;

    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "SELAMAT DATANG DI PROGRAM MENENTUKAN ZONASI PERSEBARAN COVID-19 PADA SUATU KELURAHAN" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "  Program ini akan membantu Anda dalam menentukan Zonasi Persebaran Kasus Covid-19  " << endl;
    cout << "             dalam suatu Kelurahan yang terdapat pada suatu Kecamatan               " << endl << endl;
    cout << "Daftar Zona Yang Tersedia :" << endl;
    cout << " a. Zona Hitam" << endl;
    cout << " b. Zona Merah" << endl;
    cout << " c. Zona Oranye" << endl;
    cout << " d. Zona Hijau" << endl << endl;
    cout << "Silahkan diisi terlebih dahulu" << endl;
    cout << "Masukkan Kelurahan Anda : "; cin >> kelurahan;
    cout << "Masukkan Kecamatan Anda : "; cin >> kecamatan; cout << endl;
    cout << "Silahkan Jawab Pertanyaan - Pertanyaan Berikut Untuk Menentukan Zona Anda!" << endl;
    cout << "Petunjuk!" << endl;
    cout << "Jawab Y untuk YA dan N untuk TIDAK" << endl << endl;

    //Pertanyaan
    cout << "Daftar Pertanyaan :" << endl;
    cout << " 1. Apakah pada Survei Minggu Pertama Terdapat Kasus Positif Covid-19?\n";
    cout << " Jawab : ";
    cin >> minggu1; cout << endl;

    cout << " 2. Apakah pada Survei Minggu Kedua Terdapat Kasus Positif Covid-19 Yang Meningkat?\n";
    cout << " Jawab : ";
    cin.ignore(1,'\n');
    cin >> minggu2; cout << endl;

    cout << " 3. Apakah Terdapat Kasus Kematian Akibat Covid-19?\n";
    cout << " Jawab : ";
    cin.ignore(1,'\n');
    cin >> kematian; cout << endl;

    cout << " 4. Apakah Terdapat ODP Dalam Daerah Tersebut?\n";
    cout << " Jawab : ";
    cin.ignore(1,'\n');
    cin >> odp;

    cout << endl;

    if (minggu1=='Y' && minggu2=='Y' && kematian=='Y' && odp=='Y')
        {
        hasil="ZONA HITAM";
        cout << "Zona Terdeteksi..." << endl;
        cout << "Zona Dalam Kelurahan " << kelurahan << ", Kecamatan " << kecamatan <<  " Adalah "  << hasil << endl;
    }

    else if (minggu1=='Y' && minggu2=='Y' && kematian=='N' && odp=='Y')
        {
        hasil="ZONA MERAH";
        cout << "Zona Terdeteksi..." << endl;
        cout << "Zona Dalam Kelurahan " << kelurahan << ", Kecamatan " << kecamatan <<  " Adalah "  << hasil << endl;
    }

    else if (minggu1=='N' && minggu2=='N' && kematian=='N' && odp=='Y')
        {
        hasil="ZONA ORANYE";
        cout << "Zona Terdeteksi..." << endl;
        cout << "Zona Dalam Kelurahan " << kelurahan << ", Kecamatan " << kecamatan <<  " Adalah "  << hasil << endl;
    }

    else if (minggu1=='N' && minggu2=='N' && kematian=='N' && odp=='N')
        {
        hasil="ZONA HIJAU";
        cout << "Zona Terdeteksi..." << endl;
        cout << "Zona Dalam Kelurahan " << kelurahan << ", Kecamatan " << kecamatan <<  " Adalah "  << hasil << endl;
    }
    else {
        cout << "Zona Tidak Terdeteksi..." << endl;
        cout << "Maaf Zona Anda Tidak Terdeteksi, Pastikan Jawaban Yang Anda Isi Sudah Sesuai! " << endl;
    }

    return 0;
}


