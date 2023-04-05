#include <iostream>
using namespace std;


struct DetailAlamat {
	char Desa[20];
	char Kecamatan[20];
	char Kota[20];
};

struct Mahasiswa
{
    char NIM[12];
    char Nama[20];
    DetailAlamat Alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs[5];


    for (int i = 0; i < 5; i++) {


        cout << "Masukkan NIM = ";
        cin.getline(mhs[i].NIM, 12);
        cout << "Masukkan Nama = ";
        cin.getline(mhs[i].Nama, 20);
        cout << "Alamat : ";
        cout << "\nMasukan Desa = ";
        cin.getline(mhs[i].Alamat.Desa, 20);
        cout << "\tMasukkan Kecamata = ";
        cin.getline(mhs[i].Alamat.Kecamatan, 20);
        cout << "\tMasukkan Kota = ";
        cin.getline(mhs[i].Alamat.Kota, 20);
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
    }


   

}

