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



