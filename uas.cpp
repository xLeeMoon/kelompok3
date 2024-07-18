#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Item{
    string name;
    int quantity;
    double price;
};
int main(){
    vector<Item> items;
    char choice;
    double total = 0.0;

    cout << "Penghitung Hasil Toko\n";

    do{
        Item item;
        cout << "\nMasukkan nama barang:";
        cin.ignore();
        getline(cin,item.name);
        cout << "Masukkan jumlah barang:";
        cin >> item.quantity;
        cout << "Masukkan harga per unit:";
        cin >> item.price;

        items.push_back(item);

        cout << "Apakah Anda ingin menambahkan barang lain?(y/n):";
        cin >> choice;
    }while(choice == 'y' || choice == 'Y');

    cout << "\nDaftar Barang:\n";
    cout << left << setw(20) << "Nama Barang"
         << setw(10) << "Jumlah"
         << setw(10) << "Harga"
         << setw(10) << "Total" << endl;

}