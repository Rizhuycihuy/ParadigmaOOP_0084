#include <iostream>
using namespace std;

class Barang {
private:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

public:
    Barang(string nama, int jumlah, string kategori, string tanggalProduksi) {
        this->nama = nama;
        this->jumlah = jumlah;
        this->kategori = kategori;
        this->tanggalProduksi = tanggalProduksi;
    }

    void tampilkanSpesifikasi() {
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah            : " << jumlah << endl;
        cout << "Kategori          : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalProduksi << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Barang elektronik("kulkas", 10, "Elektronik", "2030-01-15");

    Barang nonElektronik("almari", 20, "Non Elektronik", "2030-11-10");

    elektronik.tampilkanSpesifikasi();
    nonElektronik.tampilkanSpesifikasi();

    return 0;
}