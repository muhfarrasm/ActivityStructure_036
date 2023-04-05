#include <iostream>
using namespace std;

struct DetailAlamat {
	string Desa;
	string Kecamatan;
	string Kota;
};

struct Mahasiswa
{
    string NIM;
    string Nama;
    DetailAlamat Alamat;
    int umur;

};


int main()
{
    Mahasiswa mhs;

    cout << "Masukkan NIM = ";
    cin >> mhs.NIM;
    cout << "Masukkan Nama = ";
    cin >> mhs.Nama;
    cout << "Alamat : ";
    cout << "\nMasukan Desa = ";
    cin >> mhs.Alamat.Desa;
    cout << "\nMasukkan Kecamata = ";
    cin >> mhs.Alamat.Kecamatan;
    cout << "\nMasukkan Kota = ";
    cin >> mhs.Alamat.Kota;
    cout << "Masukkan umur = ";
    cin >> mhs.umur;

    cout << "\nNIM = " << mhs.NIM;
    cout << "\nNama = " << mhs.Nama;
    cout << "Alamat Desa = " << mhs.Alamat.Desa<<endl;
    cout << "Alamat Kecamatan = " << mhs.Alamat.Kecamatan<<endl;
    cout << "Alamat Kota = " << mhs.Alamat.Kota<<endl;
    cout << "\nUmur = " << mhs.umur;

}



