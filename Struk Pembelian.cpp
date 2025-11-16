void cetakStruk(Barang barang[], int jumlah) {
    if (jumlah == 0) {
        cout << "\nBelum ada barang yang dimasukkan.\n";
        return;
    }

    double total = 0;
    cout << "\n=============================================\n";
    cout << "                STRUK PEMBELIAN              \n";
    cout << "=============================================\n";
    for (int i = 0; i < jumlah; i++) {
        cout << (i + 1) << ". " << barang[i].nama << " - Rp " << barang[i].harga << endl;
        total += barang[i].harga;
    }
    cout << "---------------------------------------------\n";
    cout << "Total Pembelian : Rp " << total << endl;
    cout << "=============================================\n";
    cout << "Terima kasih telah berbelanja! \n";
}
