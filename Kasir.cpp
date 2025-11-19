#include <bits/stdc++.h>
#include<windows.h>
using namespace std;

struct Barang {
    string nama;
    double harga;
};



void header();
void menuUtama();
void tambahBarang(Barang barang[], int &jumlah);
void tampilBarang(Barang barang[], int jumlah);
void cetakStruk(Barang barang[], int jumlah);

int main() {
    Barang barang[100];
    int jumlah = 0;
    int pilihan;

    do {
        system("cls"); 
        header();
        menuUtama();
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahBarang(barang, jumlah);
                break;
            case 2:
                tampilBarang(barang, jumlah);
                break;
            case 3:
                cetakStruk(barang, jumlah);
                break;
            case 4:
                cout << "\nTerima kasih telah menggunakan program kasir ini!\n";
                break;
            default:
                cout << "\nPilihan tidak valid!\n";
        }

        if (pilihan != 4) {
            cout << "\nTekan Enter untuk kembali ke menu...";
            cin.ignore();
            cin.get();
        }
    } while (pilihan != 4);

    return 0;
}
void header(){
    cout << "=============================================\n";
    cout << "  >>>>>     PROGRAM KASIR MINI       <<<<<   \n";
    cout << "=============================================\n\n";
}

void menuUtama() {
    cout << "1. Tambah Barang\n";
    cout << "2. Lihat Daftar Barang\n";
    cout << "3. Cetak Struk Pembelian\n";
    cout << "4. Keluar\n\n";
}
void tambahBarang(Barang barang[], int &jumlah) {
    int n;
    cout << "\nBerapa banyak barang yang ingin ditambahkan? ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nBarang ke-" << (jumlah + 1) << endl;
        cout << "Nama Barang : ";
        getline(cin, barang[jumlah].nama);
        cout << "Harga (Rp)  : ";
        cin >> barang[jumlah].harga;
        cin.ignore();
        jumlah++;
    }

    cout << "\nBarang berhasil ditambahkan!\n";
}

void tampilBarang(Barang barang[], int jumlah) {
    if (jumlah == 0) {
        cout << "\nBelum ada barang yang dimasukkan.\n";
        return;
    }

    cout << "\n---------------------------------------------\n";
    cout << "No | Nama Barang                 | Harga (Rp)\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < jumlah; i++) {
        cout << (i + 1) << "  | " << barang[i].nama << " | Rp " << barang[i].harga << endl;
    }
    cout << "---------------------------------------------\n";
}
