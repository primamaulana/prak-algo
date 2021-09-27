#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int pil,pengajar,siswa,kuota_pengajar,kuota_siswa,total;
    string nama_instansi;

    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << "SELAMAT DATANG DI PROGRAM MENGHITUNG TOTAL BIAYA KUOTA INTERNET PADA SUATU INSTANSI" << endl;
    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << "   Program ini akan membantu Anda untuk menghitung total biaya kuota yang harus\n";
    cout << "               dikeluarkan sesuai dengan data yang Anda masukkan" << endl << endl;
    cout << "Silahkan Pilih Instansi Anda :" << endl;
    cout << " 1. PAUD\n 2. SD\n 3. SMP\n 4. SMA\n 5. Perguruan Tinggi" << endl << endl;
    cout << "Pilihan Instansi (Masukkan Nomor) : ";
    cin >> pil;
    cout << endl;
    cout << "Silahkan diisi" << endl;
    cout << "Masukkan Jumlah Pengajar : ";
    cin >> pengajar;
    cout << "Masukkan Jumlah Siswa    : ";
    cin >> siswa;

    if(pil == 1){
        nama_instansi = "PAUD";
        kuota_siswa = 20;
        kuota_pengajar = 0;
    }
    else if(pil == 2){
        nama_instansi = "SD";
        kuota_siswa = 35;
        kuota_pengajar = 42;
    }
    else if(pil == 3){
        nama_instansi = "SMP";
        kuota_siswa = 35;
        kuota_pengajar = 42;
    }
    else if(pil == 4){
        nama_instansi = "SMA";
        kuota_siswa = 35;
        kuota_pengajar = 42;
    }
    else if(pil == 5){
        nama_instansi = "Perguruan Tinggi";
        kuota_siswa = 50;
        kuota_pengajar = 50;
    }
    else {
        nama_instansi = "Tidak Tersedia";
        kuota_siswa = 0;
        kuota_pengajar = 0;
    }

    //rumus
    total = (pengajar*kuota_pengajar*6000) + (siswa*kuota_siswa*6000);

    cout << "-------------------------------------------------" << endl;
    cout << "                     =DATA=" << endl;
    cout << "Berikut ini adalah data yang sudah diinput diatas" << endl;
    cout << " Nama Instansi           : " << nama_instansi << endl;
    cout << " Jumlah Siswa            : " << siswa << endl;
    cout << " Jumlah Pengajar         : " << pengajar << endl;
    cout << " Kuota Internet Siswa    : " << kuota_siswa << " GB" << endl;
    cout << " Kuota Internet Pengajar : " << kuota_pengajar << " GB" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "                  =BIAYA KUOTA=" << endl;
    cout << "Harga kuota adalah Rp.6000 per 1 GB" << endl;
    cout << "Total biaya yang harus dikeluarkan = Rp." << total << endl;
    cout << "-------------------------------------------------" << endl;

    return 0;
}
