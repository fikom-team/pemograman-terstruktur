#include <iostream>

using namespace std;

/**
 * @hananloser
 * @return void
 * **/
void biodata()
{
    string name;
    string alamat;
    char jk;

    cout << "Masukan Nama =";
    // Masukan Variable Name
    cin >> name;
    // Tampil kan pesan di terminaljkjkjkjk
    cout << "Masukan Alamat =";
    // Masukan Variable Alamat ;
    cin >> alamat;
    // Tampilkan Pesan Di Command Line
    cout << "Masukan Jenis Kelamin (PR/JK) = ";
    // Input Variable JK
    cin >> jk;
    // Tampilkan Semua Yang sudah di masukan dalam Variable
    cout << "Nama saya " + name + "\n";
    cout << "Alamat saya " + alamat + "\n";
    cout << "Jenis Kelamain Saya" + jk; 
}

int main()
{
    biodata();
}