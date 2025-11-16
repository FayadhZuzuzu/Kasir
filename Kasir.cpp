#include <bits/stdc++.h>
#include<windows.h>
using namespace std;


void header();
void menuUtama();
void tambahBarang(Barang barang[], int &jumlah);
void tampilBarang(Barang barang[], int jumlah);
void cetakStruk(Barang barang[], int jumlah);

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

int main(){
	
}
